# Turtlesim package Publisher and Subscriber

**TODO**

- [x] Split codes into modules/header file to enhance reusability & readability.
- [ ] Write publisher and subscriber for turtle 2D simulation both in C++ and Python.

## The Package Setup

- Create a C++ package to host both C++ and Python nodes.
  ```
  ros2 pkg create pkg_cpp_py --build-type ament_cmake --dependencies rclcpp rclpy
  ```
- Follow the steps <a href="../02. ROS Overlay & Pkg/README.md#both_py_cpp_node">here</a>
- In the package, navigate to the `include` folder and `add` cpp header.

  ```
  cd include/name_same_as_package_name

  touch header_name.hpp
  ```

- In the `header file` is where you declare all the class members, methods, and include files.
- Create the `.cpp` file in the `src` folder and include the header file ceated.
  ```cpp
  #include "package_name/header_file.hpp"
  ```
- For python, locate the `module_to_import.py` file and define your classes therein.
- Create another file in the `scripts` directory where you will define your `main` function and import modules from `module_to_import.py` file.
  ```py
  from package_name.module_to_import import Classname
  ```
- In `Package.xml` file import the necessary depend and build_depend.

  ```xml
  <buildtool_depend>ament_cmake</buildtool_depend>
  <buildtool_depend>ament_cmake_python</buildtool_depend>

  <depend>rclcpp</depend>
  <depend>rclpy</depend>
  ```
- In `CMakeLists.txt` file:
  ```c
  # find dependencies
  find_package(ament_cmake REQUIRED)
  find_package(ament_cmake_python REQUIRED)
  find_package(rclcpp REQUIRED)
  find_package(rclpy REQUIRED)

  # include cpp "include" directory
  include_directories(include)

  # add cpp executable
  add_executable(executable src/filename.cpp)
  ament_target_dependencies(executable rclcpp)

  # install cpp executable
  install(TARGETS
    executable
    DESTINATION lib/${PROJECT_NAME}
  )

  # install python module & add python 
  ament_python_install_packages(${PROJECT_NAME})

  # install python
  install(PROGRAMS
    scripts/filename.py
    DESTINATION lib/${PROJECT_NAME}
  )
  ```
**NOTE:** The `include_directories` and `ament_python_install_package` are neccessary to include header files and import module respectively.

## Turtlesim

```
ros2 topic pub --once <topic_name> <msg_type> <args>
```
**N.B:** `Args` must be in Yaml format.