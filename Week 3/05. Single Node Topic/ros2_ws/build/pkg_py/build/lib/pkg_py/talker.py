#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class Talker(Node):
    def __init__(self):
        super().__init__("chatter")
        self.name_ = "Abisoye Akinloye"
        self.publisher_ = self.create_publisher(String, "chatter", 10)
        self.timer_ = self.create_timer(0.5, self.talk)

    def talk(self):
        msg = String()
        msg.data = f"Hello there, I'm {self.name_}. I'm a Robotic developer."
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    talker = Talker()
    rclpy.spin(talker)
    rclpy.shutdown()

if __name__ == '__main__':
    main()