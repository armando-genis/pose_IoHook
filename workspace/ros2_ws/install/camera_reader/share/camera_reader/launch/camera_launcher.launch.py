import launch
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Locate the parameters file
    paramsConfig = os.path.join(get_package_share_directory('camera_reader'), 'config', 'params.yaml')

    # Define the camera reader node
    publisher_node_camera = Node(
        package='camera_reader',
        node_executable='camera_reader_node',  # Ensure this is 'executable' not 'node_executable'
        name='camera_reader_node',
        output='screen',
        parameters=[paramsConfig]
    )

    return launch.LaunchDescription([publisher_node_camera])
