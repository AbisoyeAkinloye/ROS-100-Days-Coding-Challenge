#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class Talker(Node):
    def __init__(self):
        super().__init__("talker")
        self.name_ = "Abisoye Akinloye"
        self.publisher_ = self.create_publisher(String, "chatter", 10)
        self.timer_ = self.create_timer(1, self.talk)
        self.get_logger().info("Let's discuss! Talking...")

    def talk(self):
        msg = String()
        msg.data = f"Hi there, I'm {self.name_}. I'm a Robotic Engineer."
        self.publisher_.publish(msg)
