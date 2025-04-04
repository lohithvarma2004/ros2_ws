// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/GoTo.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LIPB'.
static const char * const uuv_control_msgs__srv__GoTo_Request__LIPB = "lipb";

/// Constant 'CUBIC'.
static const char * const uuv_control_msgs__srv__GoTo_Request__CUBIC = "cubic";

/// Constant 'DUBINS'.
static const char * const uuv_control_msgs__srv__GoTo_Request__DUBINS = "dubins";

/// Constant 'LINEAR'.
static const char * const uuv_control_msgs__srv__GoTo_Request__LINEAR = "linear";

// Include directives for member types
// Member 'waypoint'
#include "uuv_control_msgs/msg/detail/waypoint__struct.h"
// Member 'interpolator'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GoTo in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__GoTo_Request
{
  uuv_control_msgs__msg__Waypoint waypoint;
  double max_forward_speed;
  rosidl_runtime_c__String interpolator;
} uuv_control_msgs__srv__GoTo_Request;

// Struct for a sequence of uuv_control_msgs__srv__GoTo_Request.
typedef struct uuv_control_msgs__srv__GoTo_Request__Sequence
{
  uuv_control_msgs__srv__GoTo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__GoTo_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GoTo in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__GoTo_Response
{
  bool success;
} uuv_control_msgs__srv__GoTo_Response;

// Struct for a sequence of uuv_control_msgs__srv__GoTo_Response.
typedef struct uuv_control_msgs__srv__GoTo_Response__Sequence
{
  uuv_control_msgs__srv__GoTo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__GoTo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GO_TO__STRUCT_H_
