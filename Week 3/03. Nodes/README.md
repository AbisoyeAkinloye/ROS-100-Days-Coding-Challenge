# ROS Nodes

Nodes are the mode of communication in ROS. Each node is responsible for a single function, however, node can receive and send data to other nodes via topics, services, actions, or parameters.

Nodes are control by executable files which usually resides in the package.

* Node is subprogram responsible for only one thing
* Nodes are combined into a graph
* Communicate with each other through topics, services, and parameters
* Can be written in python, c++ ... and nodes created with python can communicate with c++ node.
* The filename `.py` or `.cpp` is then make as an executable to run node.
* Node serves a single, modular purpose in a robotics system

## Creating Python Node

Python node can be created using object-oriented programming or functional programing. 

Click <a href="ros2_ws/src/ros_py/README.md">here</a> to redirect to the README file

## Creating C++ Node

C++ node can be created using object-oriented programming or functional programing. 

Click <a href="ros2_ws/src/ros2_cpp/README.md">here</a> to redirect to the README file

## Creating both C++ and Py node in a package

Node can be created using both c++ and python in a single package.

Click <a href="ros2_ws/src/ros2_py_cpp/README.md">here</a>

## More about ROS2 Client Library

ROS2 client libraries `rcl` can be program in different languages such as:

* rclcpp - for C++
* rclpy - for Python
* rclnodejs - for Javascript node
* rcljava - Java

## ROS2 Node Command line

Flag `-h` append to any ROS command is used to get **help** message.

Flag `-t` append to any ROS command is used to get **type**.

* To list all running nodes
```ros2
ros2 node list
```
* To get information about a node topic, action and so on
```ros
ros node info /node_name
```

**Note:** Do not have multiple nodes with the same name. You can `rename` node during runtime. It is called `remaping`.

Remapping allows to reassign default node properties, like node name, topic names, service names, etc., to custom values.

```
ros2 run <package_name> <executable> --ros-args --remap__node:=new_name

OR 

ros2 run <package_name> <executable> --ros-args --r __node:=new_name
```

## Colcon build

Anytime you modify your file, you always need to build again with `colcon build` but for a `python` file you can run without rebuilding as follows:

```
colcon build --packages-select ros2_py --symlink-install
```

`--symlink-install` help to modify `.py` file and still have the updated version without building again with `colcon build`.

**N.B:** Make sure the `.py` files is set as executable in order to use `--symlink-install`.