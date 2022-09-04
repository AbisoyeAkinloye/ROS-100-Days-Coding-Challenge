# Parameters
- Parameters allow to provide runtime settings for the nodes.
- A parameter is specific to a node.
- ROS2 parameter has a name and data type. (Boolean, int, Double, String, Lists...)

## Why Parameters
It is used instead of hard coding some variables in the node. For instance, variables that changes during runtime.

Assuming you have a camera driver node and you want to set some variable at runtime, hence, you can use parameter.

|Camera driver:|Camera driver 1 | Camera driver 2 |
|:------------:|:--------------:|:---------------:|      
|Parameters:   |                |                 |
|usb_device    |/HD/usbport     | /port/hmi       |
| fps          |30              | 60              |
| simulation_mode  |true            | false       |

While changing this at the run time, you do not event have to recompile/build your workspace.

## How to use
### From the Terminal
- To list the parameters
```
ros2 param list
```
If no parameter is set, there will always be `use_sim_time` (use simulation time) parameter.

- To get parameter
  ```
  ros2 param get /node_name param_name
  ```
- To set parameter
  ```
  ros2 run <package_name> <executable_name> --ros-args -p <parameter_name>:=value
  ```
`--ros-args` to be declare once, `-p` option for parameter, use `:=` to assign value.
- for instance
  ```
    ros2 run pkg_py number_pub --ros-args -p num:=3
  ```
  **N.B:** Use `-p` multiple times if you have multiple parameters.
- ROS dynamically allocate the data type of the value given. To verify:
  ```
  ros2 param get /number_publisher num
  ```

### In Code
- In the constructor
  ```py
  self.declare_parameter("name")
  ```
- `declare_parameter` is a method inherited from the `super` class `Node`.
- To get param
  ```py
  self.get_parameter("name").value
  ```
- **Note:** Make sure you set the parameter before running the node, otherwise there will be an error.
- You can assign a default parameter.
  ```py
  self.decare_parameter("name", "Abisoye")
  ```