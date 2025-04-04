# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_butler_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED butler_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(butler_FOUND FALSE)
  elseif(NOT butler_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(butler_FOUND FALSE)
  endif()
  return()
endif()
set(_butler_CONFIG_INCLUDED TRUE)

# output package information
if(NOT butler_FIND_QUIETLY)
  message(STATUS "Found butler: 0.0.0 (${butler_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'butler' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${butler_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(butler_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${butler_DIR}/${_extra}")
endforeach()
