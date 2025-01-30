import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import xacro

def generate_launch_description():
    # Path to the URDF file
    urdf_file_path = os.path.join(
        get_package_share_directory('mesh_description'),
        'urdf',
        'robot.urdf'
    )

    if not os.path.exists(urdf_file_path):
        raise FileNotFoundError(f"URDF file not found: {urdf_file_path}")

    # Read the URDF file
    with open(urdf_file_path, 'r') as urdf_file:
        robot_description = urdf_file.read()

    # Debugging: Print the first 200 characters of the robot description
    print(f"Robot Description (First 500 chars):\n{robot_description[:500]}")

    # Define the robot_state_publisher node
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        node_executable='robot_state_publisher',  # Use 'executable' for modern versions
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description}],
        arguments=[urdf_file_path]
    )

    # Define the joint_state_publisher node
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        node_executable='joint_state_publisher',  # Use 'executable' for modern versions
        name='joint_state_publisher',
        output='screen',
    )

    # Return the launch description
    return LaunchDescription([
        joint_state_publisher_node,
        robot_state_publisher_node,
    ])
