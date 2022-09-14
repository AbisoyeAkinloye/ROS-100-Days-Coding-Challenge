cmake_minimum_required(VERSION 3.5)
project(action_pkg)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(action_pkg REQUIRED)

# generate interface
rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Move.action"
)

# install python package
ament_python_install_package(${PROJECT_NAME})

# install python executable
install(PROGRAMS
  scripts/move_action.py
  scripts/move_action_cli.py
  DESTINATION lib/${PROJECT_NAME}
)

# add cpp executable
add_executable(move_action_server src/move_action_server.cpp)
ament_target_dependencies(move_action_server "rclcpp" "geometry_msgs" "rclcpp_action" "action_pkg")

# install cpp executable
install(TARGETS
  move_action_server
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
