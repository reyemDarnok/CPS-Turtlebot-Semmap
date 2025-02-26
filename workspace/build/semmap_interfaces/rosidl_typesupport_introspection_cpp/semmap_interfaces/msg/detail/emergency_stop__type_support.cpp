// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semmap_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semmap_interfaces/msg/detail/emergency_stop__struct.hpp"
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

void EmergencyStop_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semmap_interfaces::msg::EmergencyStop(_init);
}

void EmergencyStop_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semmap_interfaces::msg::EmergencyStop *>(message_memory);
  typed_message->~EmergencyStop();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyStop_message_member_array[2] = {
  {
    "cause",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::EmergencyStop, cause),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "solvable_by_backup",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::EmergencyStop, solvable_by_backup),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyStop_message_members = {
  "semmap_interfaces::msg",  // message namespace
  "EmergencyStop",  // message name
  2,  // number of fields
  sizeof(semmap_interfaces::msg::EmergencyStop),
  EmergencyStop_message_member_array,  // message members
  EmergencyStop_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyStop_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_message_members,
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
get_message_type_support_handle<semmap_interfaces::msg::EmergencyStop>()
{
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::EmergencyStop_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, msg, EmergencyStop)() {
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::EmergencyStop_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
