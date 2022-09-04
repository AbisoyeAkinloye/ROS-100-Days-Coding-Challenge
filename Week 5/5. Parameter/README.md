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
If no parameter is set, use will always have `use_sim_time` use simulation time parameter.

- To get parameter
  ```
  ros2 param get /node_name param_name
  ```