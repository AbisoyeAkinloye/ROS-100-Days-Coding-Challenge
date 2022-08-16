# Robot Operating System (ROS 2)

ROS is an open-source software libraries and tools for building robot applications. ROS 2 is the latest verson of ROS.

|ROS1                      |ROS2                           |
|:------------------------|:------------------------------|
|Only work on Linux, Ubuntu|Ubuntu, Window 10 and Mac OS   |
|Uses C++03, Python 2.x    |C++11, C++14, Python 3.x       |
|Transmission control protocol ROS (TCPROS)| Communication over different network using Data Distribution Service (DDS)|
|Build system with Cmake   | Build system with Cmake and Python|
|Only one node in a process| Multiple nodes in a process can be created|
|Interface collides        |Interface collision-free|
|No more support from May 2025| Alive indefinitely|

## ROS2 Workspace

A `workspace` is a directory containing ROS packages. The core ROS 2 workspace is called the underlay. Subsequent local workspaces are called overlays. 

**Note:** Always run the following command when you open a new terminal to have access to ROS commands:


```bash
source /opt/ros/foxy/setup.bash
```

otherwise, instead of sourcing the setup files in every new shell/termial you open, you can adding the source command to your startup script.

```bash
echo "source /opt/ros/foxy/setup.bash" >> ~/.bashrc
```

### How to create workspace

* install `colcon`
* make directory using the following command
```linux
mkdir -p ros_ws/src
```
* navigate to the workspace
```
cd ros_ws/
```
* build the workspace using `colcon`
```
colcon build
```
* you will have addition directory in the workspace, they are: build, install, log.
* source the overlay
```bash
. install/setup.bash

or 

echo "source ~/ros_ws/install/setup.bash" >> ~/.bashrc
```

Inside the `install` folder, there is are `local_setup.bash`, `setup.bash` files and other file. 

`local_setup.bash` source the overlay only while `setup.bash` will source the global ROS2 and the workspace (overlay).

## ROS2 Packages

A package is an organized container of ROS2 codes. You can create a python, cmake or both. Package creation in ROS 2 uses ament as its build system and colcon as its build tool. 

### To create a package

* navigate to the ros2 workspace
```
cd ros_ws/src/
```
* use the following commands:
```ros
# python package
ros2 pkg create <package_name> --build-type ament_python

# c++ package
ros2 pkg create <package_name> --build-type ament_cmake
```

#### For both python and cmake in a package

```ros
ros2 pkg create pkg_cpp_py --build-type ament_cmake
```

- create a `script` folder
```
mkdir scripts/
```
- create a folder in the package, and name it exactly as the package name.

```
mkdir pkg_cpp_py/
```
- create two empty files called `__init__.py` and `module_to_import.py`
```
touch __init__.py module_to_import.py
```

Read more on package creation from the ROS2 official documentation: <a href="https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Creating-Your-First-ROS2-Package.html">here</a>