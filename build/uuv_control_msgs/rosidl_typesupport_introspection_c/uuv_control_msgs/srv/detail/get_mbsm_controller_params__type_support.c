// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_control_msgs:srv/GetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__rosidl_typesupport_introspection_c.h"
#include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__functions.h"
#include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GetMBSMControllerParams_Request__init(message_memory);
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GetMBSMControllerParams_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GetMBSMControllerParams_Request",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs__srv__GetMBSMControllerParams_Request),
  uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_member_array,  // message members
  uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_type_support_handle = {
  0,
  &uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams_Request)() {
  if (!uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_control_msgs__srv__GetMBSMControllerParams_Request__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__functions.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__struct.h"


// Include directives for member types
// Member `lambda_array`
// Member `rho_constant`
// Member `k`
// Member `c`
// Member `adapt_slope`
// Member `rho_0`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_control_msgs__srv__GetMBSMControllerParams_Response__init(message_memory);
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_fini_function(void * message_memory)
{
  uuv_control_msgs__srv__GetMBSMControllerParams_Response__fini(message_memory);
}

size_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__lambda_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__lambda_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__lambda_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__lambda_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__lambda_array(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__lambda_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__lambda_array(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__lambda_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__rho_constant(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__rho_constant(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__rho_constant(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__rho_constant(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__rho_constant(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__rho_constant(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__rho_constant(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__rho_constant(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__k(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__k(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__k(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__k(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__k(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__k(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__c(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__c(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__c(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__c(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__c(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__c(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__adapt_slope(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__adapt_slope(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__adapt_slope(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__adapt_slope(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__adapt_slope(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__adapt_slope(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__adapt_slope(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__adapt_slope(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__rho_0(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__rho_0(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__rho_0(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__rho_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__rho_0(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__rho_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__rho_0(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__rho_0(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_member_array[7] = {
  {
    "lambda_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, lambda_array),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__lambda_array,  // size() function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__lambda_array,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__lambda_array,  // get(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__lambda_array,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__lambda_array,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__lambda_array  // resize(index) function pointer
  },
  {
    "rho_constant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, rho_constant),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__rho_constant,  // size() function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__rho_constant,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__rho_constant,  // get(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__rho_constant,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__rho_constant,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__rho_constant  // resize(index) function pointer
  },
  {
    "k",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, k),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__k,  // size() function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__k,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__k,  // get(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__k,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__k,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__k  // resize(index) function pointer
  },
  {
    "c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, c),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__c,  // size() function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__c,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__c,  // get(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__c,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__c,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__c  // resize(index) function pointer
  },
  {
    "adapt_slope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, adapt_slope),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__adapt_slope,  // size() function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__adapt_slope,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__adapt_slope,  // get(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__adapt_slope,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__adapt_slope,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__adapt_slope  // resize(index) function pointer
  },
  {
    "rho_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, rho_0),  // bytes offset in struct
    NULL,  // default value
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__size_function__GetMBSMControllerParams_Response__rho_0,  // size() function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_const_function__GetMBSMControllerParams_Response__rho_0,  // get_const(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__get_function__GetMBSMControllerParams_Response__rho_0,  // get(index) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__fetch_function__GetMBSMControllerParams_Response__rho_0,  // fetch(index, &value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__assign_function__GetMBSMControllerParams_Response__rho_0,  // assign(index, value) function pointer
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__resize_function__GetMBSMControllerParams_Response__rho_0  // resize(index) function pointer
  },
  {
    "drift_prevent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs__srv__GetMBSMControllerParams_Response, drift_prevent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_members = {
  "uuv_control_msgs__srv",  // message namespace
  "GetMBSMControllerParams_Response",  // message name
  7,  // number of fields
  sizeof(uuv_control_msgs__srv__GetMBSMControllerParams_Response),
  uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_member_array,  // message members
  uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_type_support_handle = {
  0,
  &uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams_Response)() {
  if (!uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_control_msgs__srv__GetMBSMControllerParams_Response__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/get_mbsm_controller_params__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_members = {
  "uuv_control_msgs__srv",  // service namespace
  "GetMBSMControllerParams",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Request_message_type_support_handle,
  NULL  // response message
  // uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_type_support_handle = {
  0,
  &uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_control_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams)() {
  if (!uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_type_support_handle.typesupport_identifier) {
    uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_control_msgs, srv, GetMBSMControllerParams_Response)()->data;
  }

  return &uuv_control_msgs__srv__detail__get_mbsm_controller_params__rosidl_typesupport_introspection_c__GetMBSMControllerParams_service_type_support_handle;
}
