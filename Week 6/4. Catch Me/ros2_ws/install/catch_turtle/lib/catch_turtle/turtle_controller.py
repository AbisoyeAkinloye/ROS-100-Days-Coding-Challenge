#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import math

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

from catch_turtle.msg import Turtle
from catch_turtle.msg import TurtleArray


class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.pose = None
        self.turtle_to_catch = None

        self.cmd_vel_publisher_ = self.create_publisher(
            Twist, "/turtle1/cmd_vel", 10)
        self.pose_subscriber_ = self.create_subscription(
            Pose, "/turtle1/pose", self.turtle_pose_cb, 10)
        self.alive_turtles_subscriber_ = self.create_subscription(
            TurtleArray, 'alive_turtles', self.alive_turtles_cb, 10)

        self.control_loop_timer_ = self.create_timer(0.01, self.control_loop)

    def turtle_pose_cb(self, pose_msg: Pose):
        self.pose = pose_msg

    def alive_turtles_cb(self, msg: TurtleArray):
        if len(msg.turtles) > 0: 
            self.turtle_to_catch = msg.turtles[0]

    def control_loop(self):
        if self.pose == None or self.turtle_to_catch == None:
            return

        dist_x = self.turtle_to_catch.x - self.pose.x
        dist_y = self.turtle_to_catch.y - self.pose.y
        
        distance = math.sqrt(dist_x**2 + dist_y**2)
        self.get_logger().info(f"Distance: {distance}")

        cmd_vel = Twist()

        if distance > 0.5:
            # position
            cmd_vel.linear.x = 1.5*distance
            # orientation
            goal_theta = math.atan2(dist_y, dist_x)
            diff = goal_theta - self.pose.theta
            if diff > math.pi:
                diff -= 2*math.pi
            elif diff < -math.pi:
                diff += 2*math.pi
            cmd_vel.angular.z = 4*diff
        else:
            cmd_vel.linear.x = 0.0
            cmd_vel.angular.z = 0.0

        self.cmd_vel_publisher_.publish(cmd_vel)


def main(args=None):
    rclpy.init(args=args)
    turtle_controller = TurtleController()
    rclpy.spin(turtle_controller)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
