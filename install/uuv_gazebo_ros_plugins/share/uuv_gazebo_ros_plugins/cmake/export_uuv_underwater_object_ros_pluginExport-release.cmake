#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "uuv_gazebo_ros_plugins::uuv_underwater_object_ros_plugin" for configuration "Release"
set_property(TARGET uuv_gazebo_ros_plugins::uuv_underwater_object_ros_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(uuv_gazebo_ros_plugins::uuv_underwater_object_ros_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libuuv_underwater_object_ros_plugin.so"
  IMPORTED_SONAME_RELEASE "libuuv_underwater_object_ros_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS uuv_gazebo_ros_plugins::uuv_underwater_object_ros_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_uuv_gazebo_ros_plugins::uuv_underwater_object_ros_plugin "${_IMPORT_PREFIX}/lib/libuuv_underwater_object_ros_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
