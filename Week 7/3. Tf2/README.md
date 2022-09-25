# TF Package

The TF package embeds all option pertaining to frame and transformation. `TF` stands for transformation library in ROS. TF allows to find the pose of any object in any frame using tranformation.

## Benefits of TF
- performs transformation easily
- using the package, user doesn't have to worry about frame
- provides built-in functions to publish and listen to frame in ROS

## TF package node
The TF package has several ROS nodes that provides utilities to manipulate frames and transformation in ROS.
- view_frame: to visualize the full frame of the coordinate transform. It creates the diagram of the frames being broadcasted by tf2 over ROS.
  ```
  ros2 run tf2_tools view_frames.py
  ```
- tf2_echo: print specified transformation to screen. It reports the transform between any two frames broadcasted over ROS.
  ```
  ros2 run tf2_ros tf2_echo <reference_frame> <target_frame>

  Output:
  At time 1622031713.8856xxx
    - Translation: [2.789, 1.039, 0.000]
    - Rotation: in Quaternion [0.000, 0.00, 0.202, 0.979]
  ```
- tf2_monitor: to monitor transfomation between frames.
  ```
  ros2 run tf2_ros tf2_monitor <reference_frame> <target_frame>
  ```
- static_transform_publisher: it is a command line tool for sending static transform.
  ```
  ros2 run tf2_ros static_transform_publisher 1 2 3 0.1 0.2 0.3 frame_a frame_b 10
  ```
  - 1 2 3 are the `transformation` vector
  - 0.1 0.2 0.3 are the rotation angle (yaw, roll, pitch)
  - frame_a & frame_b are parent and child frame respectively
  - 10 is the broadcast frequency