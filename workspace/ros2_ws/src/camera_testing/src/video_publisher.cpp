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
    RCLCPP_INFO(this->get_logger(), "\033[1;32m----> camera_reader_node initialized.\033[0m");
}

video_publisher::~video_publisher()
{
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