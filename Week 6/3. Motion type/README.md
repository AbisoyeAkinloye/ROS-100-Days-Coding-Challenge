# Motion types
There are different types of motion in ROS
1. Straight line
2. Rotation in place
3. Go to goal 
4. Spiral 

## Straight line
For a straight line motion in ROS (turtlesim), you just have to specify a constant speed.

```
Linear:
    x: speed
    y: 0
    z: 0
Angular:
    x = 0
    y = 0
    z = 0
```

## Rotation in place
The turtle rotates at a constant angular speed.

```
Linear:
    x: 0
    y: 0
    z: 0
Angular:
    x = 0
    y = 0
    z = speed
```

## Go to goal 

The concept of go-to-goal falls under the PID (Proportion, Integral, Derivative) controller.

![Goal](goal.png)

```
Linear:
    x: f(distance)
    y: 0
    z: 0
Angular:
    x = 0
    y = 0
    z = f(angle)
```

## Spiral targetory

```
Linear:
    x: f(time)
    y: 0
    z: 0
Angular:
    x = 0
    y = 0
    z = constant
```

# Motion in space

In ground robot, the motion is only in 2D space but in flying robot; the motion is in 3D space.

For ground robot:

```
Linear:
    x: variable
    y: 0
    z: 0
```
`y` will be zero because it not a holonomic robot and `z` will be zero because it is not a flying robot.