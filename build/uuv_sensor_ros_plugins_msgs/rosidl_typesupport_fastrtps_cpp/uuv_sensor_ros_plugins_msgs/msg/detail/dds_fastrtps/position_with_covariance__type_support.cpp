// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_sensor_ros_plugins_msgs
cdr_serialize(
  const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.pos,
    cdr);
  // Member: covariance
  {
    cdr << ros_message.covariance;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_sensor_ros_plugins_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance & ros_message)
{
  // Member: pos
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.pos);

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_sensor_ros_plugins_msgs
get_serialized_size(
  const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pos

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.pos, current_alignment);
  // Member: covariance
  {
    size_t array_size = 9;
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_uuv_sensor_ros_plugins_msgs
max_serialized_size_PositionWithCovariance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: pos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: covariance
  {
    size_t array_size = 9;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance;
    is_plain =
      (
      offsetof(DataType, covariance) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _PositionWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PositionWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PositionWithCovariance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PositionWithCovariance__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PositionWithCovariance(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PositionWithCovariance__callbacks = {
  "uuv_sensor_ros_plugins_msgs::msg",
  "PositionWithCovariance",
  _PositionWithCovariance__cdr_serialize,
  _PositionWithCovariance__cdr_deserialize,
  _PositionWithCovariance__get_serialized_size,
  _PositionWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _PositionWithCovariance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PositionWithCovariance__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return &uuv_sensor_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::_PositionWithCovariance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovariance)() {
  return &uuv_sensor_ros_plugins_msgs::msg::typesupport_fastrtps_cpp::_PositionWithCovariance__handle;
}

#ifdef __cplusplus
}
#endif
