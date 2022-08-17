# ROS Nodes

Nodes are the mode of communication in ROS. Each node is responsible for a single function, however, node can receive and send data to other nodes via topics, services, actions, or parameters.

Nodes are control by executable files which usually resides in the package.

* Node is subprogram responsible for only one thing
* Nodes are combined into a graph
* Communicate with each other through topics, services, and parameters
* Can be written in python, c++ ... and nodes created with python can communicate with c++ node.
* The filename `.py` or `.cpp` is then make as an executable to run node.

## Creating Python Node

Python node can be created using object-oriented programming or functional programing. 

Click <a href="ros2_ws/src/ros_py/README.md">here</a> to redirect to the README file

## Creating C++ Node

C++ node can be created using object-oriented programming or functional programing. 

Click <a href="ros2_ws/src/ros2_cpp/README.md">here</a> to redirect to the README file
