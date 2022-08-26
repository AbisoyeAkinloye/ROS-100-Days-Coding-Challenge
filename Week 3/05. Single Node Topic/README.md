# Single Node Topic

Instead of having different node or file for both the publisher and the subscriber, you can write both in a single node.

## How to

The procedure is the same for python package, c++ package, and package which comprises of both python and c++ node.

## Code here:
```py
#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

from example_interfaces.msg import String

class IntroduceMe(Node):
    def __init__(self):
        super().__init__("introduction")
        self.name_ = "Abisoye"
        self.publisher_ = self.create_publisher(String, "meeting", 10)
        self.timer_ = self.create_timer(2,self.introduce)
        self.get_logger().info("Started talking...")
        self.subscriber_ = self.create_subscription(String, "/meeting", self.get_message, 10)

    def introduce(self):
        msg = String()
        msg.data = f"Hi there, I am {self.name_}. I am a Robotic developer."
        self.publisher_.publish(msg)

    def get_message(self, msg):
        self.get_logger().info(msg.data)

def main(args=None):
    rclpy.init(args=args)
    introducing = IntroduceMe()
    rclpy.spin(introducing)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
```