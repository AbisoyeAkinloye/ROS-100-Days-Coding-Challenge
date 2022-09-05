cmake_minimum_required(VERSION 3.5)
project(pkg_cpp)

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
find_package(example_interfaces REQUIRED)

# add cpp executable
add_executable(number_pub src/number_publisher.cpp)
ament_target_dependencies(number_pub rclcpp example_interfaces)

# install cpp executable
install(TARGETS
  number_pub
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()