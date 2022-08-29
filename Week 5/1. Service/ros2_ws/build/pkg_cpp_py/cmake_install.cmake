# Install script for directory: /home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/src/pkg_cpp_py

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/install/pkg_cpp_py")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/pkg_cpp_py" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/src/pkg_cpp_py/pkg_cpp_py/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/install/pkg_cpp_py/lib/python3.8/site-packages/pkg_cpp_py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkg_cpp_py" TYPE PROGRAM FILES
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/src/pkg_cpp_py/scripts/add_two_ints_server.py"
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/src/pkg_cpp_py/scripts/add_two_ints_client.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/pkg_cpp_py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/pkg_cpp_py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_index/share/ament_index/resource_index/packages/pkg_cpp_py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py/cmake" TYPE FILE FILES
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_core/pkg_cpp_pyConfig.cmake"
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/ament_cmake_core/pkg_cpp_pyConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pkg_cpp_py" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/src/pkg_cpp_py/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 5/1. Service/ros2_ws/build/pkg_cpp_py/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
