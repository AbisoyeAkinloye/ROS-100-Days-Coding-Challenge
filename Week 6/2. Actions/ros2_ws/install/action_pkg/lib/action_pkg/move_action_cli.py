#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from action_pkg.action import Move

class MoveActionClient(Node):
    def __init__(self):
        super().__init__("move_action_client")
        self.move_action_client = ActionClient(self, Move,"/move_action")
        # self.get_logger().info("About to send a goal...")

    def send_goal(self, distance):
        goal_msg = Move.Goal()
        goal_msg.distance = distance

        self.move_action_client.wait_for_server()

        goal_future = self.move_action_client.send_goal_async(goal_msg,self.feedback_callback)
        goal_future.add_done_callback(self.goal_callback)

    def goal_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Oops! Goal rejected")
            return
        self.get_logger().info("Goal accepted")
        result_future = goal_handle.get_result_async()
        result_future.add_done_callback(self.result_callback)

    def result_callback(self, future):
        result = future.result().result.status
        self.get_logger().info(f"Result: {result}")
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f"Feedback:\n\tThe current distance is {feedback.current_distance}")

def main(args=None):
    rclpy.init(args=args)
    move_action = MoveActionClient()
    distance = float(input("Enter a specific distance: "))
    move_action.send_goal(distance)
    rclpy.spin(move_action)

if __name__ == '__main__':
    main()