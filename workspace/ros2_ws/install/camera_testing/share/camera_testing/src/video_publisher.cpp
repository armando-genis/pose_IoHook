#include <rclcpp/rclcpp.hpp>
#include <opencv2/opencv.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <chrono>

class video_publisher : public rclcpp::Node
{
private:
    /* data */
    cv::VideoCapture cap_;
    std::string video_path_;

    void publish_frame();

    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

public:
    video_publisher(/* args */);
    ~video_publisher();
};

video_publisher::video_publisher(/* args */) : Node("camera_reader_node")
{
    video_path_ = "/workspace/nucor1.mkv";
    cap_.open(video_path_);
    if (!cap_.isOpened())
    {
        RCLCPP_ERROR(this->get_logger(), "Failed to open video file: %s", video_path_.c_str());
        rclcpp::shutdown();
    }

    // Retrieve the frame rate from the video
    double fps = cap_.get(cv::CAP_PROP_FPS);

    // print the fps in green
    RCLCPP_INFO(this->get_logger(), "\033[1;32mFPS: %f\033[0m", fps);

    if (fps <= 0)
    {
        RCLCPP_WARN(this->get_logger(), "Could not determine FPS. Defaulting to 30 FPS.");
        fps = 30.0;
    }

    int frame_interval_ms = static_cast<int>(1000 / fps);

    // print the frame_interval_ms in green
    RCLCPP_INFO(this->get_logger(), "\033[1;32mFrame interval: %d ms\033[0m", frame_interval_ms);

    image_pub_ = this->create_publisher<sensor_msgs::msg::Image>("/camera/image", 10);

    timer_ = this->create_wall_timer(
        std::chrono::milliseconds(frame_interval_ms),
        std::bind(&video_publisher::publish_frame, this));

    RCLCPP_INFO(this->get_logger(), "\033[1;32m----> camera_reader_node initialized.\033[0m");
}

video_publisher::~video_publisher()
{
}

void video_publisher::publish_frame()
{
    cv::Mat frame;
    if (!cap_.read(frame))
    {
        RCLCPP_WARN(this->get_logger(), "Video ended or cannot read frame");
        rclcpp::shutdown();
        return;
    }

    // Convert the OpenCV frame to a ROS 2 image message
    std_msgs::msg::Header header;
    header.stamp = this->now();
    header.frame_id = "camera_frame";
    sensor_msgs::msg::Image::SharedPtr image_msg = cv_bridge::CvImage(header, "bgr8", frame).toImageMsg();
    image_pub_->publish(*image_msg);
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<video_publisher>());
    rclcpp::shutdown();
    return 0;
}

//   323  apt install ros-$ROS_DISTRO-xacro
//   324  apt install ros-$ROS_DISTRO-joint-state-publisher-gui
//   apt-get install -y ffmpeg