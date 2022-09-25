#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from math import sin, cos, pi
from rclpy.qos import QoSProfile
from tf2_ros import TransformBroadcaster, TransformStamped

class StatePublisher(Node):
    def __init__(self):
        super().__init__("state_publisher")

        qos_profile = QoSProfile(depth=10)
        self.joint_publisher = self.create_publisher(JointState, "joint_states", qos_profile)
        self.broadcaster = TransformBroadcaster(self, qos=qos_profile)
        self.nodeName = self.get_name()
        self.get_logger().info(f"{self.nodeName} started...")

        degree = pi/180
        loop_rate = self.create_rate(30)