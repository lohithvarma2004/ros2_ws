# CMake generated Testfile for 
# Source directory: /home/uav/ros2_ws/src/Plankton/uuv_descriptions
# Build directory: /home/uav/ros2_ws/build/uuv_descriptions
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_urdf_files "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/uav/ros2_ws/build/uuv_descriptions/test_results/uuv_descriptions/test_urdf_files.xunit.xml" "--package-name" "uuv_descriptions" "--output-file" "/home/uav/ros2_ws/build/uuv_descriptions/ament_cmake_pytest/test_urdf_files.txt" "--append-env" "AMENT_PREFIX_PATH=" "PYTHONPATH=/home/uav/ros2_ws/build/uuv_descriptions" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/home/uav/ros2_ws/src/Plankton/uuv_descriptions/test/test_urdf_files.py" "-o" "cache_dir=/home/uav/ros2_ws/build/uuv_descriptions/ament_cmake_pytest/test_urdf_files/.cache" "--junit-xml=/home/uav/ros2_ws/build/uuv_descriptions/test_results/uuv_descriptions/test_urdf_files.xunit.xml" "--junit-prefix=uuv_descriptions")
set_tests_properties(test_urdf_files PROPERTIES  LABELS "pytest" TIMEOUT "120" WORKING_DIRECTORY "/home/uav/ros2_ws/build/uuv_descriptions" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pytest/cmake/ament_add_pytest_test.cmake;169;ament_add_test;/home/uav/ros2_ws/src/Plankton/uuv_descriptions/CMakeLists.txt;31;ament_add_pytest_test;/home/uav/ros2_ws/src/Plankton/uuv_descriptions/CMakeLists.txt;0;")
