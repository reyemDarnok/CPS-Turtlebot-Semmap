// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semmap_interfaces/msg/detail/invalidate_map__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace semmap_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void InvalidateMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semmap_interfaces::msg::InvalidateMap(_init);
}

void InvalidateMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semmap_interfaces::msg::InvalidateMap *>(message_memory);
  typed_message->~InvalidateMap();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InvalidateMap_message_member_array[1] = {
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::InvalidateMap, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InvalidateMap_message_members = {
  "semmap_interfaces::msg",  // message namespace
  "InvalidateMap",  // message name
  1,  // number of fields
  sizeof(semmap_interfaces::msg::InvalidateMap),
  InvalidateMap_message_member_array,  // message members
  InvalidateMap_init_function,  // function to initialize message memory (memory has to be allocated)
  InvalidateMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InvalidateMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InvalidateMap_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace semmap_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<semmap_interfaces::msg::InvalidateMap>()
{
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::InvalidateMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, msg, InvalidateMap)() {
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::InvalidateMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
