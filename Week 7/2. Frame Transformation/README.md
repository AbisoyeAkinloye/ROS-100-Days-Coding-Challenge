# Frame Transformation

A frame is a reference that is used to localise objects/robots. Robots can have different types of location based on the reference frame.

The objective of a frame is to have reference to express the `position` and `orientation` of an object. The position is the point at the coordinate (x,y) of a robot or an object with respect to a given frame.

**N.B:** `pose` = _position + orientation_ Hence, to determine the pose of a robot, you need to have a reference frame.

**Orientation of the robot**

Robot orientation are represented in four stage values: x, y, z, w. These are otherwise called `Quaternion` but as human we understand rotation angle in `roll`, `pitch` and `yaw`.

## Global & Local path planner

amcl_pose and odom

## Frame Transformation

Tranformation between two frame involves:

1. Translation
2. Rotation
