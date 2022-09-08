#!/usr/bin/env python3

import math
import rclpy
from rclpy.node import Node
from functools import partial

from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

from catch_turtle.msg import Turtle
from catch_turtle.msg import TurtleArray
from catch_turtle.srv import CatchTurtle


class TurtleController(Node):
    def __init__(self):
        super().__init__("turtle_controller")
        self.declare_parameter("catch_closest_turtle",True)

        self.pose = None
        self.turtle_to_catch = None
        self.catch_closest_turtle = self.get_parameter("catch_closest_turtle").value

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
            if self.catch_closest_turtle:
                closest_turtle = None
                closest_turtle_distance = None
                
                for turtle in msg.turtles:
                    dist_x = turtle.x - self.pose.x
                    dist_y = turtle.y - self.pose.y
                    distance = math.sqrt(dist_x**2 + dist_y**2)

                    if closest_turtle == None or distance < closest_turtle_distance:
                        closest_turtle = turtle
                        closest_turtle_distance = distance
                self.turtle_to_catch = closest_turtle
            else:
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
            # target reached
            cmd_vel.linear.x = 0.0
            cmd_vel.angular.z = 0.0
            self.call_catch_turtle_service(self.turtle_to_catch.name)
            self.turtle_to_catch = None

        self.cmd_vel_publisher_.publish(cmd_vel)

    def call_catch_turtle_service(self, turtle_name):
        client = self.create_client(CatchTurtle, "/catch_turtle")

        while not client.wait_for_service(1.0):
            self.get_logger().warn("Service not available, waiting again..")

        request = CatchTurtle.Request()
        request.name = turtle_name

        future = client.call_async(request)
        future.add_done_callback(
            partial(self.catch_turtle_service_callback, turtle_name=turtle_name))

    def catch_turtle_service_callback(self, future, turtle_name):
        try:
            response = future.result()
            if not response.success:
                self.get_logger().error(f"{turtle_name} could not be caught")
        except Exception as e:
            self.get_logger().error("Service call failed: %r" % (e,))


def main(args=None):
    rclpy.init(args=args)
    turtle_controller = TurtleController()
    rclpy.spin(turtle_controller)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
