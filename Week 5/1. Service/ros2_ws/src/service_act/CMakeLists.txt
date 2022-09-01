cmake_minimum_required(VERSION 3.5)
project(service_act)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(example_interfaces REQUIRED)

# install python module
ament_python_install_package(${PROJECT_NAME})

# install python executable
install(PROGRAMS
  scripts/number_pub.py
  scripts/number_counter.py
  scripts/reset_counter_client.py
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
