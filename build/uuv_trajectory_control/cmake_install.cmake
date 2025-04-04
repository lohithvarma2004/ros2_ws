# Install script for directory: /home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/uav/ros2_ws/install/uuv_trajectory_control")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/environment" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/environment" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_control_interfaces-0.6.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_python/uuv_control_interfaces/uuv_control_interfaces.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_control_interfaces" TYPE DIRECTORY FILES "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/src/uuv_control_interfaces/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/uav/ros2_ws/install/uuv_trajectory_control/local/lib/python3.10/dist-packages/uuv_control_interfaces"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_trajectory_generator-0.6.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_python/uuv_trajectory_generator/uuv_trajectory_generator.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_trajectory_generator" TYPE DIRECTORY FILES "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/src/uuv_trajectory_generator/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/uav/ros2_ws/install/uuv_trajectory_control/local/lib/python3.10/dist-packages/uuv_trajectory_generator"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_waypoints-0.6.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_python/uuv_waypoints/uuv_waypoints.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_waypoints" TYPE DIRECTORY FILES "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/src/uuv_waypoints/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/uav/ros2_ws/install/uuv_trajectory_control/local/lib/python3.10/dist-packages/uuv_waypoints"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_trajectory_generator.path_generator-0.6.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_python/uuv_trajectory_generator.path_generator/uuv_trajectory_generator.path_generator.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/uuv_trajectory_generator.path_generator" TYPE DIRECTORY FILES "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/src/uuv_trajectory_generator/path_generator/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/uav/ros2_ws/install/uuv_trajectory_control/local/lib/python3.10/dist-packages/uuv_trajectory_generator.path_generator"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/utils-0.6.1-py3.10.egg-info" TYPE DIRECTORY FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_python/utils/utils.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/utils" TYPE DIRECTORY FILES "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/src/utils/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/uav/ros2_ws/install/uuv_trajectory_control/local/lib/python3.10/dist-packages/utils"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/uuv_trajectory_control" TYPE PROGRAM FILES
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_nl_pid_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_mb_sm_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_nmb_sm_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_pid_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_ua_pid_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_mb_fl_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/auv_geometric_tracking_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/demo_wp_trajectory_generator.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_pd_grav_compensation_controller.py"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/scripts/rov_sf_controller.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE DIRECTORY FILES
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/launch"
    "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/config"
    REGEX "/[^/]*\\~$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/uuv_trajectory_control")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/uuv_trajectory_control")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/environment" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/environment" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_index/share/ament_index/resource_index/packages/uuv_trajectory_control")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control/cmake" TYPE FILE FILES
    "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_core/uuv_trajectory_controlConfig.cmake"
    "/home/uav/ros2_ws/build/uuv_trajectory_control/ament_cmake_core/uuv_trajectory_controlConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_trajectory_control" TYPE FILE FILES "/home/uav/ros2_ws/src/Plankton/uuv_control/uuv_trajectory_control/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/uav/ros2_ws/build/uuv_trajectory_control/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
