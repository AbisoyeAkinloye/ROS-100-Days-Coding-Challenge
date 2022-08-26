#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class RobotNewsStation(Node):
    def __init__(self):
        super().__init__("robot_news_station")
        self.robot_name_ = "Loybot"
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        self.timer_ = self.create_timer(0.5, self.publish_news)
        self.get_logger().info("Robot news has just started.")

    def publish_news(self):
        msg = String()
        msg.data = f"Hi, here is the latest news brought to you by {self.robot_name_}."
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    robot_news = RobotNewsStation()
    rclpy.spin(robot_news)
    rclpy.shutdown()

if __name__ == '__main__':
    main()