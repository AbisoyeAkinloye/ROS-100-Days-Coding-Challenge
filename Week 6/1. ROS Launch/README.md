# Launch Files

Instead of opening different tabs in the terminal to launch different nodes, you can use a launch file to launch all at once from only a single file.

## How to create launch file

Launch file can be created in 3 different ways:

1. Python script
2. XML (Extensible Markup Language)
3. YAML

You can create lauch file **in the <a href="#file">package</a>** where you wanna use it or create launch **as a <a href="#package">package</a>**.

### Create Launch file in a package
<div id="file"></div>

- Make a launch directory in the package
  ```
  mkdir launch
  ```
- Create a python file name with `filename.launch.py` in the launch folder
- Add the follow script:

```py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node (
            package = "package_name",
            executable = 'executable_name"
        ),
        Node (
            package = "package_name",
            executable = 'executable_name"
        )
    ])
```

- In the `CMakeLists.txt` add the follow:

  ```c
  # install launch file

  install(DIRECTORY
    launch
    DESTINATION share/${PROJECT_NAME}
  )
  ```

- In the `packages.xml` file, add the follow:
  ```xml
  <exec_depend>ros2launch</exec_depend>
  ```
- Build the package, then launch the launch file.

```
ros2 launch <package_name> <launch_file>
```

### Create Launch as a package
<div id="package"></div>

- create a package called `robot_name_bringup`. appending `bringup` is often used to identify launch package.
  ```
  ros2 pkg create robot_bringup
  ```
- remove `include` and `src` from the package and create `launch` directory
  ```
  rm -rf include src
  mkdir launch
  ```
- In `CMakeLists.txt`

  ```c
  # install launch file

  install(DIRECTORY
   launch
   DESTINATION share/${PROJECT_NAME}
  )
  ```

- Create a python file name with `filename.launch.py` in the launch folder
- Make it executable `chmod +x filename.launch.py` and Add the follow script:

```py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
   ld = LaunchDescription()

   first_node = Node(
    package="first_package_name",
    executable="executable_name"
   )

    second_node = Node(
    package="second_package_name",
    executable="executable_name"
   )

   ld.add_action(first_node)
   ld.add_action(second_node)
   return ld
```

**Note:** The name of the function name should be `generate_launch_description`, it should be changed to something else.

- Add dependencies in the `package.xml` file
  ```xml
  <exec_depend>first_package_name</exec_depend>
  <exec_depend>second_package_name</exec_depend>
  ```

