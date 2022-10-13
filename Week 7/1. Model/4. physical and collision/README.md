# Adding Physical and collision properties

You can add collision and intertial properties to link, and add joint dynamics to joints.

## Collision

In order to get collision detection to work or to simulate the robot, we need to define a collision element.

- The collision element is a direct subelement of the link object, at the same level as the visual tag.
- The collision element defines its shape the same way the visual element does, with a geometry tag. 
- In many cases, you’ll want the collision geometry and origin to be exactly the same as the visual geometry and origin. 
 - Quicker processing
 - Safe zone: You may want to restrict movement close to sensitive equipment.

Sample code <a href="./1. collison.urdf">here</a>

## Physical Properties

In order to get your model to simulate properly, you need to define several physical properties of your robot, i.e. the properties that a physics engine like Gazebo would need.

### Inertia
Every link element being simulated needs an inertial tag.

```xml
<inertial>
    <mass value="10"/>
    <inertia ixx="1e-3" ixy="0.0" ixz="0.0" iyy="1e-3" iyz="0.0" izz="1e-3"/>
</inertial>
```

- The mass is defined in kilogram
- The 3x3 rotational inertia matrix is specified with the inertia element. Since this is symmetrical, it can be represented by only 6 elements, as such:
  |          |           |             |
  |:--------:|:---------:|:-----------:|
  | ixx      |ixy        |ixz          |
  | ixy      |iyy        |iyz          |
  | ixz      |ixz        |izz          |

- The inertia of geometric primitives (cylinder, box, sphere) can be computed using <a href="https://en.wikipedia.org/wiki/List_of_moments_of_inertia#List_of_3D_inertia_tensors">Wikipedia’s</a> list of moment of inertia tensors (and is used in the above example).
- If unsure what to put, a matrix with ixx/iyy/izz=1e-3 or smaller is often a reasonable default for a mid-sized link (it corresponds to a box of 0.1 m side length with a mass of 0.6 kg). 
- The identity matrix is a particularly bad choice, since it is often much too high (it corresponds to a box of 0.1 m side length with a mass of 600 kg!).
- You can also specify an origin tag to specify the center of gravity and the inertial reference frame (relative to the link’s reference frame).
- When using realtime controllers, inertia elements of zero (or almost zero) can cause the robot model to collapse without warning, and all links will appear with their origins coinciding with the world origin.

## Contact Coefficents

You can also define how the links behave when they are in contact with one another.

There are three attributes to specify:

1. mu - Friction coefficient 
2. kp - Stiffness coefficient
3. kd - Dampening coefficient

## Joint dynamics

How the joint moves is defined by the dynamics tag for the joint. There are two attributes here:

1. Friction - The physical static friction. For *prismatic joints*, the units are Newtons. For *revolving joints*, the units are Newton meters.
2. Damping - The physical damping value. For *prismatic joints*, the units are *Newton seconds per meter*. For revolving joints, Newton meter seconds per radian.

## Other Tags
1. Calibration: The reference positions of the joint, used to calibrate the absolute position of the joint.
2. Safey controller