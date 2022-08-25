cmake_minimum_required(VERSION 3.5)
project(pkg_cpp_py)

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
find_package(geometry_msgs REQUIRED)

# include cpp "include" directory
include_directories(include)

# add cpp executable
add_executable(talker src/talker.cpp)
ament_target_dependencies(talker rclcpp example_interfaces)
add_executable(draw_circle src/draw_circle.cpp)
ament_target_dependencies(draw_circle rclcpp geometry_msgs)

# install cpp executable
install(TARGETS
  talker
  draw_circle
  DESTINATION lib/${PROJECT_NAME}
)

# install python module & add python 
ament_python_install_package(${PROJECT_NAME})

# install python
install(PROGRAMS
  scripts/talker.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
