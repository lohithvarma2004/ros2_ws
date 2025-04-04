// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PositionWithCovariance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance(_init);
}

void PositionWithCovariance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance *>(message_memory);
  typed_message->~PositionWithCovariance();
}

size_t size_function__PositionWithCovariance__covariance(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__PositionWithCovariance__covariance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__PositionWithCovariance__covariance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__PositionWithCovariance__covariance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PositionWithCovariance__covariance(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PositionWithCovariance__covariance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PositionWithCovariance__covariance(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PositionWithCovariance_message_member_array[2] = {
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance, pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "covariance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance, covariance),  // bytes offset in struct
    nullptr,  // default value
    size_function__PositionWithCovariance__covariance,  // size() function pointer
    get_const_function__PositionWithCovariance__covariance,  // get_const(index) function pointer
    get_function__PositionWithCovariance__covariance,  // get(index) function pointer
    fetch_function__PositionWithCovariance__covariance,  // fetch(index, &value) function pointer
    assign_function__PositionWithCovariance__covariance,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PositionWithCovariance_message_members = {
  "uuv_sensor_ros_plugins_msgs::msg",  // message namespace
  "PositionWithCovariance",  // message name
  2,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance),
  PositionWithCovariance_message_member_array,  // message members
  PositionWithCovariance_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionWithCovariance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PositionWithCovariance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PositionWithCovariance_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return &::uuv_sensor_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::PositionWithCovariance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovariance)() {
  return &::uuv_sensor_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::PositionWithCovariance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
