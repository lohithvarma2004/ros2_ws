// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#ifndef UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__STRUCT_H_
#define UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetMBSMControllerParams in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__GetMBSMControllerParams_Request
{
  uint8_t structure_needs_at_least_one_member;
} uuv_control_msgs__srv__GetMBSMControllerParams_Request;

// Struct for a sequence of uuv_control_msgs__srv__GetMBSMControllerParams_Request.
typedef struct uuv_control_msgs__srv__GetMBSMControllerParams_Request__Sequence
{
  uuv_control_msgs__srv__GetMBSMControllerParams_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__GetMBSMControllerParams_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'lambda_array'
// Member 'rho_constant'
// Member 'k'
// Member 'c'
// Member 'adapt_slope'
// Member 'rho_0'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetMBSMControllerParams in the package uuv_control_msgs.
typedef struct uuv_control_msgs__srv__GetMBSMControllerParams_Response
{
  rosidl_runtime_c__double__Sequence lambda_array;
  rosidl_runtime_c__double__Sequence rho_constant;
  rosidl_runtime_c__double__Sequence k;
  rosidl_runtime_c__double__Sequence c;
  rosidl_runtime_c__double__Sequence adapt_slope;
  rosidl_runtime_c__double__Sequence rho_0;
  double drift_prevent;
} uuv_control_msgs__srv__GetMBSMControllerParams_Response;

// Struct for a sequence of uuv_control_msgs__srv__GetMBSMControllerParams_Response.
typedef struct uuv_control_msgs__srv__GetMBSMControllerParams_Response__Sequence
{
  uuv_control_msgs__srv__GetMBSMControllerParams_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_control_msgs__srv__GetMBSMControllerParams_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_CONTROL_MSGS__SRV__DETAIL__GET_MBSM_CONTROLLER_PARAMS__STRUCT_H_
