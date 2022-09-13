# Movable Robot Model

In the previous model, all of the joints were fixed. Now we’ll explore three other important types of joints: continuous, revolute and prismatic.

## Continous Joint

```xml
<joint name="head_swivel" type="continuous">
  <parent link="base_link"/>
  <child link="head"/>
  <axis xyz="0 0 1"/>
  <origin xyz="0 0 0.3"/>
</joint>
```

The robot wheels are also modeled like this, so that they can roll in both directions forever +ve inf and -ve inf.

The only additional element is the axis of rotation,specified by an xyz triplet, which specifies a vector around which the head will rotate. Since we want it to go around the z axis, we specify the vector “0 0 1”.

## Revolute Joint

```xml
<joint name="left_gripper_joint" type="revolute">
  <axis xyz="0 0 1"/>
  <limit effort="1000.0" lower="0.0" upper="0.548" velocity="0.5"/>
  <origin rpy="0 0 0" xyz="0.2 0.01 0"/>
  <parent link="gripper_pole"/>
  <child link="left_gripper"/>
</joint>
```

The rotation is the same way as that of continuous joints, but they have strict limits. 

Hence, we must include the limit tag specifying the upper and lower limits of the joint (in radians). 

We also must specify a maximum velocity and effort for this joint but the actual values don’t matter for our purposes here but in simulation.

## Prismatic

``xml
<joint name="gripper_extension" type="prismatic">
  <parent link="base_link"/>
  <child link="gripper_pole"/>
  <limit effort="1000.0" lower="-0.38" upper="0" velocity="0.5"/>
  <origin rpy="0 0 0" xyz="0.19 0 0.2"/>
</joint>
```

For a prismatic joint, it moves along an axis, not around it. It is a translational movement.

The limits of the prismatic arm are specified in the same way as a revolute joint, **except that the units are meters, not radians**.

## Other types

There are two other kinds of joints that move around in space. Whereas the prismatic joint can only move along one dimension, a planar joint can move around in a plane, or two dimensions. 

Furthermore, a floating joint is unconstrained, and can move around in any of the three dimensions.