#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "uuv_world_ros_plugins::uuv_sc_ros_interface_plugin" for configuration "Release"
set_property(TARGET uuv_world_ros_plugins::uuv_sc_ros_interface_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(uuv_world_ros_plugins::uuv_sc_ros_interface_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libuuv_sc_ros_interface_plugin.so"
  IMPORTED_SONAME_RELEASE "libuuv_sc_ros_interface_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS uuv_world_ros_plugins::uuv_sc_ros_interface_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_uuv_world_ros_plugins::uuv_sc_ros_interface_plugin "${_IMPORT_PREFIX}/lib/libuuv_sc_ros_interface_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
