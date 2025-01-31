cmake_minimum_required(VERSION 3.8)
project(camera_testing)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)

# Add the executable
add_executable(camera_testing_node src/video_publisher.cpp)

ament_target_dependencies(camera_testing_node
  rclcpp
  sensor_msgs
  cv_bridge
)

# Link OpenCV libraries
target_link_libraries(camera_testing_node ${OpenCV_LIBS} )

# Add include directories
target_include_directories(camera_testing_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${OpenCV_INCLUDE_DIRS}
)

# Install the executable
install(TARGETS camera_testing_node
  DESTINATION lib/${PROJECT_NAME})


install(
  DIRECTORY src
  DESTINATION share/${PROJECT_NAME}
)

message(=============================================================)
message("-- ROS Found. ROS Support is turned ON.")
message(=============================================================)

ament_package()
