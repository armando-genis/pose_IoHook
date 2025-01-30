# CMake generated Testfile for 
# Source directory: /workspace/ros2_ws/src/rosbridge_suite/rosapi
# Build directory: /workspace/ros2_ws/build/rosapi
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rosapi_test_stringify_field_types "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/workspace/ros2_ws/build/rosapi/test_results/rosapi/rosapi_test_stringify_field_types.xunit.xml" "--package-name" "rosapi" "--output-file" "/workspace/ros2_ws/build/rosapi/ament_cmake_pytest/rosapi_test_stringify_field_types.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/workspace/ros2_ws/src/rosbridge_suite/rosapi/test/test_stringify_field_types.py" "-o" "cache_dir=/workspace/ros2_ws/build/rosapi/ament_cmake_pytest/rosapi_test_stringify_field_types/.cache" "--junit-xml=/workspace/ros2_ws/build/rosapi/test_results/rosapi/rosapi_test_stringify_field_types.xunit.xml" "--junit-prefix=rosapi")
set_tests_properties(rosapi_test_stringify_field_types PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/workspace/ros2_ws/src/rosbridge_suite/rosapi")
add_test(rosapi_test_typedefs "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/workspace/ros2_ws/build/rosapi/test_results/rosapi/rosapi_test_typedefs.xunit.xml" "--package-name" "rosapi" "--output-file" "/workspace/ros2_ws/build/rosapi/ament_cmake_pytest/rosapi_test_typedefs.txt" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/workspace/ros2_ws/src/rosbridge_suite/rosapi/test/test_typedefs.py" "-o" "cache_dir=/workspace/ros2_ws/build/rosapi/ament_cmake_pytest/rosapi_test_typedefs/.cache" "--junit-xml=/workspace/ros2_ws/build/rosapi/test_results/rosapi/rosapi_test_typedefs.xunit.xml" "--junit-prefix=rosapi")
set_tests_properties(rosapi_test_typedefs PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/workspace/ros2_ws/src/rosbridge_suite/rosapi")
