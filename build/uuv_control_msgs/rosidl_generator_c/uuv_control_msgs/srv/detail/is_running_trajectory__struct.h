// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/IsRunningTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IsRunningTrajectory in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__IsRunningTrajectory_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_control_msgs__srv__IsRunningTrajectory_Request;

// Struct for a sequence of uuv_control_msgs__srv__IsRunningTrajectory_Request.
typedef struct uuv_control_msgs__srv__IsRunningTrajectory_Request__Sequence
{
  uuv_control_msgs__srv__IsRunningTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__IsRunningTrajectory_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IsRunningTrajectory in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__IsRunningTrajectory_Response
{
  double progress;
} uuv_control_msgs__srv__IsRunningTrajectory_Response;

// Struct for a sequence of uuv_control_msgs__srv__IsRunningTrajectory_Response.
typedef struct uuv_control_msgs__srv__IsRunningTrajectory_Response__Sequence
{
  uuv_control_msgs__srv__IsRunningTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__IsRunningTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__IS_RUNNING_TRAJECTORY__STRUCT_H_
