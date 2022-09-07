# Install script for directory: /home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/install/catch_turtle")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/catch_turtle")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_c/catch_turtle/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_typesupport_fastrtps_c/catch_turtle/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_typesupport_fastrtps_cpp/catch_turtle/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_typesupport_introspection_c/catch_turtle/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_cpp/catch_turtle/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_typesupport_introspection_cpp/catch_turtle/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/libcatch_turtle__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/install/catch_turtle/lib/python3.8/site-packages/catch_turtle/__init__.py"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/msg" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle/msg/" REGEX "/[^/]*\\.py$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle:/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_fastrtps_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle:/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_introspection_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so"
         OLD_RPATH "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle:/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle/catch_turtle_s__rosidl_typesupport_c.cpython-38-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_generator_py/catch_turtle/libcatch_turtle__python.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so"
         OLD_RPATH "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle:/opt/ros/foxy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcatch_turtle__python.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/msg" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_adapter/catch_turtle/msg/Turtle.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/msg" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_adapter/catch_turtle/msg/TurtleArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/msg" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle/msg/Turtle.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/msg" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle/msg/TurtleArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.8/site-packages/catch_turtle" TYPE DIRECTORY FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle/catch_turtle/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/install/catch_turtle/lib/python3.8/site-packages/catch_turtle"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/catch_turtle" TYPE PROGRAM FILES
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle/scripts/turtle_controller.py"
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle/scripts/turtle_spawner.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/catch_turtle")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/catch_turtle")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/environment" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_index/share/ament_index/resource_index/packages/catch_turtle")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport.cmake"
         "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport.cmake"
         "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport.cmake"
         "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cppExport.cmake"
         "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport.cmake"
         "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/CMakeFiles/Export/share/catch_turtle/cmake/catch_turtle__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle/cmake" TYPE FILE FILES
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_core/catch_turtleConfig.cmake"
    "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/ament_cmake_core/catch_turtleConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/catch_turtle" TYPE FILE FILES "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/src/catch_turtle/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/catch_turtle__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/loye/Desktop/Projects/ROS-100-Days-Coding-Challenge/Week 6/4. Catch Me/ros2_ws/build/catch_turtle/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
