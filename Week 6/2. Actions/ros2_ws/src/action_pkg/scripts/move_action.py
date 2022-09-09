#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from geometry_msgs.msg import Twist
from action_pkg.action import Move
import time


class MoveAction(Node):
    def __init__(self):
        super().__init__("move_action_node")
        self.action_server_ = ActionServer(
            self, Move, "/move_action", self.execute_callback)
        self.publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.get_logger().info("The action server has been started")

    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing goal...")
        speed_msg = Twist()
        speed= 2.0
        is_forward = True

        if is_forward:
            speed_msg.linear.x = speed
        else:
            speed_msg.linear.x = -speed

        time_ = self.get_clock().now().seconds_nanoseconds()
        t0 = time_[0]
        
        current_distance = 0.0
        desired_distance = goal_handle.request.distance

        feedback_msg = Move.Feedback()

        while current_distance < desired_distance and rclpy.ok():
            time_ = self.get_clock().now().seconds_nanoseconds()
            t1 = time_[0]
            current_distance = speed_msg.linear.x * (t1-t0)
            feedback_msg.current_distance = current_distance
            self.publisher_.publish(speed_msg)
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(0.1)
            

        goal_handle.succeed()
        speed_msg.linear.x = 0.0
        self.publisher_.publish(speed_msg)

        result = Move.Result()
        result.status = "Finished action"
        return result

def main(args=None):
    rclpy.init(args=args)
    move_action = MoveAction()
    rclpy.spin(move_action)
    rclpy.shutdown()

if __name__=='__main__':
    main()