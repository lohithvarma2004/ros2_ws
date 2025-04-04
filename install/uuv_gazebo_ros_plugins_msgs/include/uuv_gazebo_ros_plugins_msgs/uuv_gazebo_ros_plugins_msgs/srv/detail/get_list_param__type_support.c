// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetListParam.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__init(message_memory);
}

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "GetListParam_Request",  // message name
  1,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request),
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_member_array,  // message members
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Request)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Request__rosidl_typesupport_introspection_c__GetListParam_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__functions.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__struct.h"


// Include directives for member types
// Member `description`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__init(message_memory);
}

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__fini(message_memory);
}

size_t uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__size_function__GetListParam_Response__tags(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_const_function__GetListParam_Response__tags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_function__GetListParam_Response__tags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__fetch_function__GetListParam_Response__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_const_function__GetListParam_Response__tags(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__assign_function__GetListParam_Response__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_function__GetListParam_Response__tags(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__resize_function__GetListParam_Response__tags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__size_function__GetListParam_Response__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_const_function__GetListParam_Response__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_function__GetListParam_Response__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__fetch_function__GetListParam_Response__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_const_function__GetListParam_Response__data(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__assign_function__GetListParam_Response__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_function__GetListParam_Response__data(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__resize_function__GetListParam_Response__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_member_array[3] = {
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response, tags),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__size_function__GetListParam_Response__tags,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_const_function__GetListParam_Response__tags,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_function__GetListParam_Response__tags,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__fetch_function__GetListParam_Response__tags,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__assign_function__GetListParam_Response__tags,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__resize_function__GetListParam_Response__tags  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response, data),  // bytes offset in struct
    NULL,  // default value
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__size_function__GetListParam_Response__data,  // size() function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_const_function__GetListParam_Response__data,  // get_const(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__get_function__GetListParam_Response__data,  // get(index) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__fetch_function__GetListParam_Response__data,  // fetch(index, &value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__assign_function__GetListParam_Response__data,  // assign(index, value) function pointer
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__resize_function__GetListParam_Response__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "GetListParam_Response",  // message name
  3,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response),
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_member_array,  // message members
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Response)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uuv_gazebo_ros_plugins_msgs__srv__GetListParam_Response__rosidl_typesupport_introspection_c__GetListParam_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // service namespace
  "GetListParam",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_Request_message_type_support_handle,
  NULL  // response message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Response)()->data;
  }

  return &uuv_gazebo_ros_plugins_msgs__srv__detail__get_list_param__rosidl_typesupport_introspection_c__GetListParam_service_type_support_handle;
}
