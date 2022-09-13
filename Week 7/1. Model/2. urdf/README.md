# Building a visual robot

**URDF** means Uniform Robotics Description Format. It is an `xml` specification used for defining multibody system such as robot.

It contains information related to inertial and mass which are responsible for robot mechanical properties.

**N.B:** Make sure you have `urdf_tutorial` package binaries installed.

```
sudo apt install ros-foxy-urdf_tutorial
```

## Create shapes

You can create one shape, <a href="./2. multipleshape.urdf">multiple</a> overlay shape, add <a href="./4. material.urdf">color</a> to shape, make <a href="./5.visual.urdf">robot</a> with shape.

**One shape**

```xml
<xml version="1.0"?>
<robot name="robot_name">
    <link name="base_link">
        <visual>
            <geometry>
                <cylinder length="0.6" radius="0.2"/>
            </geometry>
        </visual>
    </link>
</robot>
```

**Launch the `urdf_tutorial` package regardless of working directory**

```
ros2 launch urdf_tutorial display.launch.py model:=`ros2 pkg prefix --share urdf_tutorial`/urdf/01-myfirst.urdf
```

**NOTE:** For multiple shape, they will overlap with each other because they share the same origin. To avoid overlap, you must define an `origin`.

```xml
<joint name="base_to_right_leg" type="fixed">
    <parent link="base_link"/>
    <child link="right_leg"/>
    <origin xyz="0 -0.22 0.25"/>
</joint>
```

## Link Element

1. **Geometry**

The geometry types are:

- Cylinder with length and radius
- Box with size (length width breadth)
- Sphere with radius
- Mesh

```xml
<geometry>
    <cylinder length="" radius=""/>
    <box size="length breadth width"/>
    <sphere radius=""/>
    <mesh filename="package://name_of_package/meshes/name.dae" scale="x y z"/>
</geometry>
```

**NB:**

- Object Vs Origin axis: Object axis is formed while exporting a mesh from a moelling software. Origin axis: is the offset distance from object axis.
- All dimension are in standard format. `meters` (m)
- The meshes can be imported in a nuber of different formats. `STL` is fairly common, but the engine also support `DAE` which can have its own clor data, that is, no need to specify the color/material.
- Meshes can also be sized using relative scaling parameters or a bounding box size.
- Meshes in a completely different package can be used.

2. **Material**

The material of the visual element. It is allowed to specify a material element outside of the 'link' object, in the top level 'robot' element. From within a link element you can then reference the material by name.

- color: rgba in range of 0 to 1.
- texture

```xml
    <material name="blue">
        <color rgba="0 0 0.8 1" />
    </material>

    <material name="white">
        <color rgba="1 1 1 1" />
    </material>

    <link name="base_link">
        <visual>
            <geometry>
                <cylinder length="0.6" radius="0.2" />
            </geometry>
            <material name="blue" />
        </visual>
    </link>
```

## Joint Element

We have the **joint attributes** which are; `name` and `type` and **joint elements** which are: origin, parent, child, axis, calibration, dynamics, limit, safe controller.

Read more <a href="http://wiki.ros.org/urdf/XML/joint">here</a>

**Joint types**

- Revolute: a hinge joint that rotates along the axis and has a limited range specified by the upper and lower limits.
- Continous: a continuous hinge joint that rotates around the axis and has no upper and lower limits.
- Prismatic: a sliding joint that slides along the axis, and has a limited range specified by the upper and lower limits.
- Fixed: this is not really a joint because it cannot move. All degrees of freedom are locked. This type of joint does not require the axis, calibration, dynamics, limits or safety_controller.
- Floating: this joint allows motion for all 6 degrees of freedom.
- Planar: this joint allows motion in a plane perpendicular to the axis.

```xml
<joint name="fixed_base_link" type="fixed">
    <parent link="base_link"/>
    <child link="right_leg"/>
    <origin xyz="0 -0.22 0.25"/>
</joint>

<joint name="revolve" type="continous">
    <origin xyz="0 0 0.25" rpy="0 0 0"/>
    <parent link="base_link"/>
    <child link="right_leg"/>
    <axis xyz="0 0 1"/>
</joint>
<!-- axis defines the axis to rotate  -->

<joint name="prismatic_jnt" type="prismatic">
    <origin xyz="0 0 0.25" rpy="0 0 0"/>
    <parent link="base_link"/>
    <child link="right_leg"/>
    <axis xyz="0 0 1"/>
    <limit effort="" velocity="" lower="" upper=""/>
</joint>
```
