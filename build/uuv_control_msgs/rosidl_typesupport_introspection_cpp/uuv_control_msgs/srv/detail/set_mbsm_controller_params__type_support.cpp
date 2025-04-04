// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_control_msgs:srv/SetMBSMControllerParams.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_control_msgs/srv/detail/set_mbsm_controller_params__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetMBSMControllerParams_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_control_msgs::srv::SetMBSMControllerParams_Request(_init);
}

void SetMBSMControllerParams_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_control_msgs::srv::SetMBSMControllerParams_Request *>(message_memory);
  typed_message->~SetMBSMControllerParams_Request();
}

size_t size_function__SetMBSMControllerParams_Request__lambda_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMBSMControllerParams_Request__lambda_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMBSMControllerParams_Request__lambda_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetMBSMControllerParams_Request__lambda_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetMBSMControllerParams_Request__lambda_array(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetMBSMControllerParams_Request__lambda_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetMBSMControllerParams_Request__lambda_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetMBSMControllerParams_Request__lambda_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetMBSMControllerParams_Request__rho_constant(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMBSMControllerParams_Request__rho_constant(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMBSMControllerParams_Request__rho_constant(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetMBSMControllerParams_Request__rho_constant(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetMBSMControllerParams_Request__rho_constant(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetMBSMControllerParams_Request__rho_constant(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetMBSMControllerParams_Request__rho_constant(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetMBSMControllerParams_Request__rho_constant(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetMBSMControllerParams_Request__k(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMBSMControllerParams_Request__k(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMBSMControllerParams_Request__k(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetMBSMControllerParams_Request__k(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetMBSMControllerParams_Request__k(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetMBSMControllerParams_Request__k(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetMBSMControllerParams_Request__k(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetMBSMControllerParams_Request__k(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetMBSMControllerParams_Request__c(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMBSMControllerParams_Request__c(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMBSMControllerParams_Request__c(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetMBSMControllerParams_Request__c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetMBSMControllerParams_Request__c(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetMBSMControllerParams_Request__c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetMBSMControllerParams_Request__c(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetMBSMControllerParams_Request__c(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetMBSMControllerParams_Request__adapt_slope(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMBSMControllerParams_Request__adapt_slope(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMBSMControllerParams_Request__adapt_slope(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetMBSMControllerParams_Request__adapt_slope(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetMBSMControllerParams_Request__adapt_slope(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetMBSMControllerParams_Request__adapt_slope(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetMBSMControllerParams_Request__adapt_slope(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetMBSMControllerParams_Request__adapt_slope(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetMBSMControllerParams_Request__rho_0(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetMBSMControllerParams_Request__rho_0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetMBSMControllerParams_Request__rho_0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetMBSMControllerParams_Request__rho_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetMBSMControllerParams_Request__rho_0(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetMBSMControllerParams_Request__rho_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetMBSMControllerParams_Request__rho_0(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetMBSMControllerParams_Request__rho_0(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetMBSMControllerParams_Request_message_member_array[7] = {
  {
    "lambda_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, lambda_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMBSMControllerParams_Request__lambda_array,  // size() function pointer
    get_const_function__SetMBSMControllerParams_Request__lambda_array,  // get_const(index) function pointer
    get_function__SetMBSMControllerParams_Request__lambda_array,  // get(index) function pointer
    fetch_function__SetMBSMControllerParams_Request__lambda_array,  // fetch(index, &value) function pointer
    assign_function__SetMBSMControllerParams_Request__lambda_array,  // assign(index, value) function pointer
    resize_function__SetMBSMControllerParams_Request__lambda_array  // resize(index) function pointer
  },
  {
    "rho_constant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, rho_constant),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMBSMControllerParams_Request__rho_constant,  // size() function pointer
    get_const_function__SetMBSMControllerParams_Request__rho_constant,  // get_const(index) function pointer
    get_function__SetMBSMControllerParams_Request__rho_constant,  // get(index) function pointer
    fetch_function__SetMBSMControllerParams_Request__rho_constant,  // fetch(index, &value) function pointer
    assign_function__SetMBSMControllerParams_Request__rho_constant,  // assign(index, value) function pointer
    resize_function__SetMBSMControllerParams_Request__rho_constant  // resize(index) function pointer
  },
  {
    "k",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, k),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMBSMControllerParams_Request__k,  // size() function pointer
    get_const_function__SetMBSMControllerParams_Request__k,  // get_const(index) function pointer
    get_function__SetMBSMControllerParams_Request__k,  // get(index) function pointer
    fetch_function__SetMBSMControllerParams_Request__k,  // fetch(index, &value) function pointer
    assign_function__SetMBSMControllerParams_Request__k,  // assign(index, value) function pointer
    resize_function__SetMBSMControllerParams_Request__k  // resize(index) function pointer
  },
  {
    "c",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, c),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMBSMControllerParams_Request__c,  // size() function pointer
    get_const_function__SetMBSMControllerParams_Request__c,  // get_const(index) function pointer
    get_function__SetMBSMControllerParams_Request__c,  // get(index) function pointer
    fetch_function__SetMBSMControllerParams_Request__c,  // fetch(index, &value) function pointer
    assign_function__SetMBSMControllerParams_Request__c,  // assign(index, value) function pointer
    resize_function__SetMBSMControllerParams_Request__c  // resize(index) function pointer
  },
  {
    "adapt_slope",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, adapt_slope),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMBSMControllerParams_Request__adapt_slope,  // size() function pointer
    get_const_function__SetMBSMControllerParams_Request__adapt_slope,  // get_const(index) function pointer
    get_function__SetMBSMControllerParams_Request__adapt_slope,  // get(index) function pointer
    fetch_function__SetMBSMControllerParams_Request__adapt_slope,  // fetch(index, &value) function pointer
    assign_function__SetMBSMControllerParams_Request__adapt_slope,  // assign(index, value) function pointer
    resize_function__SetMBSMControllerParams_Request__adapt_slope  // resize(index) function pointer
  },
  {
    "rho_0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, rho_0),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetMBSMControllerParams_Request__rho_0,  // size() function pointer
    get_const_function__SetMBSMControllerParams_Request__rho_0,  // get_const(index) function pointer
    get_function__SetMBSMControllerParams_Request__rho_0,  // get(index) function pointer
    fetch_function__SetMBSMControllerParams_Request__rho_0,  // fetch(index, &value) function pointer
    assign_function__SetMBSMControllerParams_Request__rho_0,  // assign(index, value) function pointer
    resize_function__SetMBSMControllerParams_Request__rho_0  // resize(index) function pointer
  },
  {
    "drift_prevent",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Request, drift_prevent),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetMBSMControllerParams_Request_message_members = {
  "uuv_control_msgs::srv",  // message namespace
  "SetMBSMControllerParams_Request",  // message name
  7,  // number of fields
  sizeof(uuv_control_msgs::srv::SetMBSMControllerParams_Request),
  SetMBSMControllerParams_Request_message_member_array,  // message members
  SetMBSMControllerParams_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMBSMControllerParams_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetMBSMControllerParams_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMBSMControllerParams_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams_Request>()
{
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::SetMBSMControllerParams_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, srv, SetMBSMControllerParams_Request)() {
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::SetMBSMControllerParams_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "uuv_control_msgs/srv/detail/set_mbsm_controller_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetMBSMControllerParams_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_control_msgs::srv::SetMBSMControllerParams_Response(_init);
}

void SetMBSMControllerParams_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_control_msgs::srv::SetMBSMControllerParams_Response *>(message_memory);
  typed_message->~SetMBSMControllerParams_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetMBSMControllerParams_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_control_msgs::srv::SetMBSMControllerParams_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetMBSMControllerParams_Response_message_members = {
  "uuv_control_msgs::srv",  // message namespace
  "SetMBSMControllerParams_Response",  // message name
  1,  // number of fields
  sizeof(uuv_control_msgs::srv::SetMBSMControllerParams_Response),
  SetMBSMControllerParams_Response_message_member_array,  // message members
  SetMBSMControllerParams_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMBSMControllerParams_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetMBSMControllerParams_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMBSMControllerParams_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams_Response>()
{
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::SetMBSMControllerParams_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, srv, SetMBSMControllerParams_Response)() {
  return &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::SetMBSMControllerParams_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "uuv_control_msgs/srv/detail/set_mbsm_controller_params__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace uuv_control_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetMBSMControllerParams_service_members = {
  "uuv_control_msgs::srv",  // service namespace
  "SetMBSMControllerParams",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetMBSMControllerParams_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetMBSMControllerParams_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_control_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::uuv_control_msgs::srv::rosidl_typesupport_introspection_cpp::SetMBSMControllerParams_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_control_msgs::srv::SetMBSMControllerParams_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_control_msgs::srv::SetMBSMControllerParams_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_control_msgs, srv, SetMBSMControllerParams)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<uuv_control_msgs::srv::SetMBSMControllerParams>();
}

#ifdef __cplusplus
}
#endif
