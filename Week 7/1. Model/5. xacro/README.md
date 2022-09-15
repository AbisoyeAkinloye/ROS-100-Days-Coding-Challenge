# Xacro

Xacro is used to reduce amount of code in urdf. It is an Xml macro language and preprocessor that is typically used to simplify the generation of `urdf` files.

Xacro is a macro language for XML, it does three things that are helpful.

- Constant
- Simple math
- Macros

## Generate URDF

Xacro runs all of the macros and outputs the result. Typical usage look like the following:

```
xacro model.xacro > model.urdf
```

To automatically generate the urdf in a launch file, include the following in the launch file.

```py
path_to_urdf = get_package_share_path('pr2_description') / 'robots' / 'pr2.urdf.xacro'
robot_state_publisher_node = launch_ros.actions.Node(
    package="robot_state_publisher',
    executable="robot_state_publisher",
    parameters=[
        {"robot_description": ParameterValue(
            command(['xacro',str(path_to_urdf)]), value_type=str
        )}
    ]
)
```

**NOTE:** Allowing launch file to automatically generate the urdf from xacro is convenient because it stays up to date and doesn't use up hard drive space and time to generate.

## TODO

- When created a xacro file asin `filename.urdf.xacro`
- At the top of the URDF file, you must specify a namespace in order for the file to parse properly.

```xml
<?xml version="1.0"?>
<robot xmlns:xacro="http://www.ros.org/wiki/xacro" name="myRobot">
```

## Create a constant

To solve redundancy and repition in code, xacro allows the use of specify properties which act as constants.

```xml
<xacro:property name="radius" value="0.2" />
<xacro:property name="length" value="0.6" />
<xacro:property name="robot_name" value="loye">

<cylinder radius="${radius}" length="${length}"/>
<robot name="${robot_name}bot"></robot>
```

## Math

You can build up arbitrarily complex expressions in the `${}` construct using the four basic operations (+,-,*,/)

``xml
<xacro:property name="diameter" value="0.7">

<cylinder radius="${diameter/2}" length="${length}">
```

- Basic mathematical operations like `cos`,`sin` (trig functions) can also be performed.
- Complex math expression: `${(2*pi*radius**2) + 1e-3}`
- Function application: `${radians(90)}`, `${degrees(pi)}`
- Python list comprehension: `${[x**2 for x in range(10)]}`

**Note:**

- Symbols and fuction from python's `math` module are directly accessible.
- Most builtin python functions are availbale with the `python` namespace, that is, `python.round(*)`.

len, True, False, min, max, None, round, filter, enumerate, zip, type, sum and so on.

## Macro

The main feature of xacro is its support for macros. Define macros with the `xacro:macro` tag, specify the macro `name` and the list of parameters.

### Parameters

```xml
<xacro:macro name="blue_shape" params="name *shape">
    <link name="${name}">
        <visual>
            <geometry>
                <xacro:insert_block name="shape" />
            </geometry>
            <material name="blue"/>
        </visual>
        <collision>
            <geometry>
                <xacro:insert_block name="shape" />
            </geometry>
        </collision>
    </link>
</xacro:macro>

<xacro:blue_shape name="base_link">
    <cylinder radius=".42" length=".01" />
</xacro:blue_shape>
```
