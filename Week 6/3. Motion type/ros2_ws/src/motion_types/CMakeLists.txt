cmake_minimum_required(VERSION 3.5)
project(motion_types)

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
find_package(turtlesim REQUIRED)
find_package(geometry_msgs REQUIRED)

# add cpp include 
include_directories(include)

# add cpp executable
add_executable(linear src/linear.cpp)
ament_target_dependencies(linear rclcpp turtlesim geometry_msgs)

add_executable(rotation src/rotation.cpp)
ament_target_dependencies(rotation rclcpp turtlesim geometry_msgs)

# add_executable(spiral src/spiral.cpp)
# ament_target_dependencies(spiral rclcpp turtlesim geometry_msgs)

add_executable(goto_goal src/goto_goal.cpp)
ament_target_dependencies(goto_goal rclcpp turtlesim geometry_msgs)

# install cpp executable
install(TARGETS
  linear
  rotation
  # spiral
  goto_goal
  DESTINATION lib/${PROJECT_NAME}
)

# install python module
ament_python_install_package(${PROJECT_NAME})

# install python executable
install(PROGRAMS
  scripts/linear.py
  scripts/rotation.py
  scripts/spiral.py
  scripts/goto_goal.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
