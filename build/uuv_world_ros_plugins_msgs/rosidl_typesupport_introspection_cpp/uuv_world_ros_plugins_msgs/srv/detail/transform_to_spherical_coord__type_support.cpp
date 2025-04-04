// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformToSphericalCoord.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TransformToSphericalCoord_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request(_init);
}

void TransformToSphericalCoord_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request *>(message_memory);
  typed_message->~TransformToSphericalCoord_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TransformToSphericalCoord_Request_message_member_array[1] = {
  {
    "input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request, input),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TransformToSphericalCoord_Request_message_members = {
  "uuv_world_ros_plugins_msgs::srv",  // message namespace
  "TransformToSphericalCoord_Request",  // message name
  1,  // number of fields
  sizeof(uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request),
  TransformToSphericalCoord_Request_message_member_array,  // message members
  TransformToSphericalCoord_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TransformToSphericalCoord_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TransformToSphericalCoord_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformToSphericalCoord_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request>()
{
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_introspection_cpp::TransformToSphericalCoord_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Request)() {
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_introspection_cpp::TransformToSphericalCoord_Request_message_type_support_handle;
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
// #include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.hpp"
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

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void TransformToSphericalCoord_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response(_init);
}

void TransformToSphericalCoord_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response *>(message_memory);
  typed_message->~TransformToSphericalCoord_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TransformToSphericalCoord_Response_message_member_array[3] = {
  {
    "latitude_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response, latitude_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "longitude_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response, longitude_deg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "altitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response, altitude),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TransformToSphericalCoord_Response_message_members = {
  "uuv_world_ros_plugins_msgs::srv",  // message namespace
  "TransformToSphericalCoord_Response",  // message name
  3,  // number of fields
  sizeof(uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response),
  TransformToSphericalCoord_Response_message_member_array,  // message members
  TransformToSphericalCoord_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TransformToSphericalCoord_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TransformToSphericalCoord_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformToSphericalCoord_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response>()
{
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_introspection_cpp::TransformToSphericalCoord_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord_Response)() {
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_introspection_cpp::TransformToSphericalCoord_Response_message_type_support_handle;
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
// #include "uuv_world_ros_plugins_msgs/srv/detail/transform_to_spherical_coord__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TransformToSphericalCoord_service_members = {
  "uuv_world_ros_plugins_msgs::srv",  // service namespace
  "TransformToSphericalCoord",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TransformToSphericalCoord_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TransformToSphericalCoord_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_introspection_cpp::TransformToSphericalCoord_service_type_support_handle;
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
        ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_world_ros_plugins_msgs, srv, TransformToSphericalCoord)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<uuv_world_ros_plugins_msgs::srv::TransformToSphericalCoord>();
}

#ifdef __cplusplus
}
#endif
