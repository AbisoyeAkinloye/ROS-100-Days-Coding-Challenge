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

## Argument vs. properties

There are two distinguished parameter in `xacro`

1. Substitute arguments: they are known from `roslaunch` file and accessed via `$(arg param_name)`. The argument needs to specified on the command line using `param_name:=value` syntax.
   ```
   xacro:arg name="param_name" default=""/>
   ```
2. Property: It allows to store textual expression.
   ```xml
   xacro:property name="param_name" value="value"/>
   ```

## Create a constant/variable

Click <a href="./1.constant.urdf.xacro">here</a> for the source code.

To solve redundancy and repition in code, xacro allows the use of specify properties which act as constants.

```xml
<xacro:property name="radius" value="0.2" />
<xacro:property name="length" value="0.6" />
<xacro:property name="robot_name" value="loye">

<cylinder radius="${radius}" length="${length}"/>
<robot name="${robot_name}bot"></robot>
```

### Property block

It is possible to define a block of xml as a variable.

```xml
<xacro:property name="cylinderical_geometry">
    <visual>
            <geometry>
                <cylinder radius="${radius}" length="${length}" />
            </geometry>
        </visual>
<xacro:property>
```

Use `xacro:insert_block` tag to insert the block. As in:

```xml
<link name="base_link">
    <xacro:insert_block name="cylinderical_geometry">
</link>
```

## Math

You can build up arbitrarily complex expressions in the `${}` construct using the four basic operations (+,-,\*,/)

``xml
<xacro:property name="diameter" value="0.7">

<cylinder radius="${diameter/2}" length="${length}">
```

- Basic mathematical operations like `cos`,`sin` (trig functions) can also be performed.
- Complex math expression: `${(2*pi*radius**2) + 1e-3}`
- Function application: `${radians(90)}`, `${degrees(pi)}`
- Python list comprehension: `${[x**2 for x in range(10)]}`
- Xacro parser cannot pass nested `${{}}` containing curly bracket. If need be to declare python dictionary as in:

```
${{"a":1, "b": 2}}

Instead use:

${dict(a=1, b=2)}
```

**Note:**

- Symbols and fuction from python's `math` module are directly accessible.
- Most builtin python functions are availbale with the `python` namespace, that is, `python.round(*)`.

len, True, False, min, max, None, round, filter, enumerate, zip, type, sum and so on.

## Macro

The main feature of xacro is its support for macros. Define macros with the `xacro:macro` tag, specify the macro `name` and the list of parameters, a list of white-space seperated names.

### Parameters

```xml
<xacro:macro name="blue_shape" params="name *block">
    <link name="${name}">
        <visual>
            <geometry>
                <xacro:insert_block name="block" />
            </geometry>
            <material name="blue"/>
        </visual>
        <collision>
            <geometry>
                <xacro:insert_block name="block" />
            </geometry>
        </collision>
    </link>
</xacro:macro>

<xacro:blue_shape name="base_link">
    <cylinder radius=".42" length=".01" />
</xacro:blue_shape>
```

The above code declares a macro called `blue_shape` with parameters `name shape`.

- The `name` is used for simple access in the `${name}`.
- The starred parameter are xml block which goes into `<xacro:insert_block name="block">`
- Starred block parameter come in two viz:
  - single-starred as in `*block` which insert the block
  - double-starred as in `**block` which will only insert block content, excluding the root tag and the attribute.
- The name attribute is the xacro name.

**Cheat:**

1. Use a name prefix to get two similiar named object
2. Use math to calculate joint origin.
3. Using a reflect parameter, and setting it to `1` or `-1`

As in:

```xml
<xacro:macro name="leg" params="prefix reflect">
    <link name="${prefix}_leg">
        <visual>
            <geometry>
                <box size="${leglen} 0.1 0.2" />
            </geometry>
            <origin xyz="0 0 -${leglen/2}" rpy="0 ${pi/2} 0" />
        </visual>
        <collision>
            <geometry>
                <box size="${leglen} 0.1 0.2" />
            </geometry>
            <origin xyz="0 0 -${leglen/2}" rpy="0 ${pi/2} 0" />
        </collision>
        <xacro:default_inertial mass="10" />
    </link>

    <joint name="base_to_${prefix}_leg" type="fixed">
        <parent link="base_link" />
        <child link="${prefix}_leg" />
        <origin xyz="0 ${reflect*(width+.02)} 0.25" />
    </joint>
    <!-- Check foxy urdf doc for the complete code -->
</xacro:macro>
<xacro:leg prefix="right" reflect="1"/>
<xacro:leg prefix="left" reflect="-1"/>
```

Read xacro official documentation <a href="https://github.com/ros/xacro/wiki">here</a>
