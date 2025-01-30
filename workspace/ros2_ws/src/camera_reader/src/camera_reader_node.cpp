#include <rclcpp/rclcpp.hpp>
#include <opencv2/opencv.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <chrono>

class CameraReaderNode : public rclcpp::Node
{
public:
    CameraReaderNode() : Node("camera_reader_node"), frame_count(0), fps(0.0)
    {

        this->declare_parameter<std::string>("user_name", "admin");
        this->declare_parameter<std::string>("password", "cv%2Bsg-34a1");
        this->declare_parameter<std::string>("camera_ip", "10.2.105.189");
        this->declare_parameter<int>("camera_port", 554);

        this->get_parameter("user_name", user_name);
        this->get_parameter("password", password);
        this->get_parameter("camera_ip", camera_ip);
        this->get_parameter("camera_port", camera_port);

        // LOG out parameters in blue color
        RCLCPP_INFO(this->get_logger(), "\033[1;34m----> user_name: %s\033[0m", user_name.c_str());
        RCLCPP_INFO(this->get_logger(), "\033[1;34m----> password: %s\033[0m", password.c_str());
        RCLCPP_INFO(this->get_logger(), "\033[1;34m----> camera_ip: %s\033[0m", camera_ip.c_str());
        RCLCPP_INFO(this->get_logger(), "\033[1;34m----> camera_port: %d\033[0m", camera_port);

        std::string rtsp_url = "rtsp://" + user_name + ":" + password + "@" + camera_ip + ":" + std::to_string(camera_port) + "/profile2/media.smp";

        // Create a VideoCapture object with the RTSP URL
        cap.open(rtsp_url);
        if (!cap.isOpened())
        {
            RCLCPP_INFO(this->get_logger(), "\033[1;31m----> Error: Could not open the video stream.\033[0m");
            rclcpp::shutdown();
        }

        // Initialize start time
        start_time = std::chrono::steady_clock::now();

        // image publisher
        image_publisher_ = this->create_publisher<sensor_msgs::msg::Image>("/camera/image", 10);

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(30),
            std::bind(&CameraReaderNode::capture_frame, this));



        RCLCPP_INFO(this->get_logger(), "\033[1;32m----> camera_reader_node initialized.\033[0m");
    }

private:
    void capture_frame()
    {
        cv::Mat frame;
        bool ret = cap.read(frame);

        if (ret)
        {
            frame_count++;

            auto end_time = std::chrono::steady_clock::now();
            std::chrono::duration<double> time_diff = end_time - start_time;

            // Calculate FPS every second
            if (time_diff.count() >= 1.0)
            {
                fps = frame_count / time_diff.count();
                start_time = std::chrono::steady_clock::now();
                frame_count = 0;
            }

            // Display FPS on the video frame
            std::string fps_text = "FPS: " + std::to_string(fps);
            cv::putText(frame, fps_text, cv::Point(10, 30), cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(0, 255, 0), 2);

            // Convert the OpenCV frame to a ROS 2 image message
            std_msgs::msg::Header header;
            header.stamp = this->now();
            header.frame_id = "camera_frame";

            sensor_msgs::msg::Image::SharedPtr image_msg = cv_bridge::CvImage(header, "bgr8", frame).toImageMsg();

            // Publish the image message
            image_publisher_->publish(*image_msg);

            // Show the video stream locally
            // cv::imshow("FLIR Camera Stream", frame);

            // Press 'q' to exit
            if (cv::waitKey(1) == 'q')
            {
                rclcpp::shutdown();
            }
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "\033[1;31m---->Error: Could not capture the video frame.\033[0m");

            rclcpp::shutdown();
        }
    }

    cv::VideoCapture cap;

    // params for stsp url
    std::string user_name;
    std::string password;
    std::string camera_ip;
    int camera_port;

    int frame_count;
    double fps;
    std::chrono::steady_clock::time_point start_time;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr image_publisher_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CameraReaderNode>());
    rclcpp::shutdown();
    return 0;
}

// this->declare_parameter<std::string>("rtsp_url", "rtsp://admin:cv+sg-34a1@10.2.105.189:554/profile2/media.smp");

// // Get RTSP URL from the parameter
// this->get_parameter("rtsp_url", rtsp_url);