import launch
from launch.substitutions import LaunchConfiguration
import launch_ros
import os

def generate_launch_description():

    # ros2 run camera_testing camera_testing_node
    # ros2 launch inference_webcam inference.launch.py

    web_cam_test = launch_ros.actions.Node(
        package='camera_testing',
        node_executable='camera_testing_node',
        name='publisher',
        output='screen',
    )

    efficientpose_path = '/workspace/EfficientPose'

    publisher_aruco_node = launch_ros.actions.Node(
        package='inference_webcam',
        node_executable='ros2_inference_ladle_hook.py',
        name='publisher',
        output='screen',
        additional_env={'PYTHONPATH': efficientpose_path + ':' + os.environ.get('PYTHONPATH', '')}
    )

    
    return launch.LaunchDescription([
        # web_cam_test,
        publisher_aruco_node
    ])