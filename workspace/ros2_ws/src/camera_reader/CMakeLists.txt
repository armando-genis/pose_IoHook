cmake_minimum_required(VERSION 3.8)
project(camera_reader)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Add the executable
add_executable(camera_reader_node src/camera_reader_node.cpp)

ament_target_dependencies(camera_reader_node
  rclcpp
  sensor_msgs
  cv_bridge
)

# Link OpenCV libraries
target_link_libraries(camera_reader_node ${OpenCV_LIBS} )

# Add include directories
target_include_directories(camera_reader_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  ${OpenCV_INCLUDE_DIRS}
)

# Install the executable
install(TARGETS camera_reader_node
  DESTINATION lib/${PROJECT_NAME})


install(
  DIRECTORY launch src config
  DESTINATION share/${PROJECT_NAME}
)

message(=============================================================)
message("-- ROS Found. ROS Support is turned ON.")
message(=============================================================)

ament_package()
