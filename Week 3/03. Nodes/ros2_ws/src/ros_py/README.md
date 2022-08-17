# ROS Nodes

Nodes are the mode of communication in ROS. Each node is responsible for a single function, however, node can receive and send data to other nodes via topics, services, actions, or parameters.

Nodes are control by executable files which usually resides in the package.

* Node is subprogram responsible for only one thing
* Nodes are combined into a graph
* Communicate with each other through topics, services, and parameters
* Can be written in python, c++ ... and nodes created with python can communicate with c++ node.
* The filename `.py` or `.cpp` is the executable.

## Creating Python node
* In the package create, navigate to a folder named as exactly the package name.
* create new file in it.
```
touch first_node.py
```
* type the following: 
```py
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

def main(args=None):
    rclpy.init(args=args)
    node = Node("py_test")
    node.get_logger("log").info("Hello ROS2")
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```

**Code explain:**

```py
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
```
The first line is called `shebang` which defined where the python intepreter is located. Without it, the operating system doesn't know it is a python scipt, even if execution flag is set.

`import rclpy` means import ros client python which is a dependency.


```py
def main(args=None):
    rclpy.init(args=args)
    node = Node("py_test")
    node.get_logger().info("Hello ROS2")
    rclpy.spin(node)
    rclpy.shutdown()
```

Define a function called `main` with the argument set to `None`. Afterward, the first thing to do is to initialize a ros and pass the the main function parameter as argument.

```py
rclpy.init(args=args)
```

Instantiate a Node class that is, node object and pass in the node name as `string`. node object has a `logger` method for print information to the terminal. With `spin` the node will continually be alive until it is aborted.

```py
node = Node("node_name")
node.get_logger().info("Text to print on the terminal")
rclpy.spin()
```

Shutdown the node from running `ctrl + c`
```py
rclpy.shutdown()
```

* grant the py file permission as executable.
```bash
chmod +x first_node.py
```

* run the executable `./first_node.py`

### Install python node into ROS workspace

* You will install it from the `setup.py` file in the package.
```json
'console_scripts': [
    "py_node = ros_py.first_node:main"
],
```

`py_node` is the name of the executable, `ros_py` is the package name, `first_node` is the file name asin first_node.py and `main` is the main function defined to run.

* Build the workspace
```
colcon build --package-select ros_py
```

* source the workspace
`. install/setup.bash`

* run the executable
```
ros2 run <package_name> <executable>

ros2 run ros_py py_node
```