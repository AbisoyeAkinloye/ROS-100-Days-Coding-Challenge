# Building a visual robot

Make sure you have `urdf_tutorial` package binaries installed.

```
sudo apt install ros-foxy-urdf_tutorial
```

## Create one shape

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
    <mesh filename="package://urdf_tutorial/meshes/name.dae" />
</geometry>
```

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

**Joint types**

- Revolute: a hinge joint that rotates along the axis and has a limited range specified by the upper and lower limits.
- Continous: a continuous hinge joint that rotates around the axis and has no upper and lower limits.
- Prismatic: a sliding joint that slides along the axis, and has a limited range specified by the upper and lower limits.
- Fixed: this is not really a joint because it cannot move. All degrees of freedom are locked. This type of joint does not require the axis, calibration, dynamics, limits or safety_controller.
- Floating: this joint allows motion for all 6 degrees of freedom.
- Planar: this joint allows motion in a plane perpendicular to the axis.
