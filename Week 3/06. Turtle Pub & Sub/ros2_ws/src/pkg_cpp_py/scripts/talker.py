#!/usr/bin/env python3

import rclpy
from pkg_cpp_py.module_to_import import Talker

def main(args=None):
    rclpy.init(args=args)
    talker = Talker()
    rclpy.spin(talker)
    rclpy.shutdown()

if __name__ == '__main__':
    main()