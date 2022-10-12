# Launch file to locate URDF

## How To

- Goto the `setup.py` file in the package directory
- Add `glob` and `os` module
  ```py
  from glob import glob
  import os
  ```
- In the `setup()` add the following
  ```py
  data_files = [
    (os.path.join('share', package_name, 'urdf'), glob("urdf/*")),
    (os.path.join('share', package_name, 'meshes'), glob("meshes/*")),
    (os.path.join('share', package_name, 'launch'), glob("launch/*"))
  ]

- Make sure you have folder named `urdf`, `launch`, and `meshes` in the package folder.

- Create a `launch` folder and `rviz.launch.py` file therein.

- Add the following 
```py
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    package_share_dir = get_package_share_directory('ros2_path_planning')
    urdf = os.path.join(package_share_dir, "urdf", "2.maze_bot.urdf")

    return LaunchDescription([
        Node(
            package="robot_state_publisher",
            executable="robot_state_publisher",
            name="robot_state_publisher",
            output="screen",
            arguments=[urdf]
        ),
        Node(
            package="joint_state_publisher_gui",
            executable="joint_state_publisher_gui",
            name="joint_state_publisher_gui",
            output="screen",
            arguments=[urdf]
        ),
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            output="screen"
        )
    ]
    )
```
- In `package.xml` file, add the launch executive dependency
  ```xml
  <exec_depend>ros2launch</exec_depend>
  ```
- Build the package `colcon buid`
- The run the launch file
  ```
  ros2 launch <package> rviz.launch.py
  ```
- If using rviz for the first time, do the following configuration.
  - Fixed frame: set to the base link of the urdf.
  - Click add, and add `RobotModel`
  - Description Topic: set it to `/robot_description`