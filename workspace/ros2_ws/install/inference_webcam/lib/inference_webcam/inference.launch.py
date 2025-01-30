import launch
from launch.substitutions import LaunchConfiguration
import launch_ros
import os

def generate_launch_description():

    efficientpose_path = '/workspace/EfficientPose'

    publisher_aruco_node = launch_ros.actions.Node(
        package='inference_webcam',
        node_executable='ros2_inference.py',
        name='publisher',
        output='screen',
        additional_env={'PYTHONPATH': efficientpose_path + ':' + os.environ.get('PYTHONPATH', '')}
    )
    
    return launch.LaunchDescription([
        publisher_aruco_node
    ])