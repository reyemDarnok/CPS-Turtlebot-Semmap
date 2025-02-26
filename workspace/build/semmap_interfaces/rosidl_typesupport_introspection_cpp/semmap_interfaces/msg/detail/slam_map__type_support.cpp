// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semmap_interfaces/msg/detail/slam_map__struct.hpp"
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

void SlamMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semmap_interfaces::msg::SlamMap(_init);
}

void SlamMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semmap_interfaces::msg::SlamMap *>(message_memory);
  typed_message->~SlamMap();
}

size_t size_function__SlamMap__positive_and0_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SlamMap__positive_and0_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SlamMap__positive_and0_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SlamMap__positive_and0_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SlamMap__negative_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SlamMap__negative_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SlamMap__negative_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SlamMap__negative_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SlamMap__positive_and0_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SlamMap__positive_and0_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SlamMap__positive_and0_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SlamMap__positive_and0_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SlamMap__negative_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SlamMap__negative_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SlamMap__negative_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SlamMap__negative_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SlamMap_message_member_array[4] = {
  {
    "positive_and0_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::SlamMap, positive_and0_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SlamMap__positive_and0_x,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SlamMap__positive_and0_x,  // fetch(index, &value) function pointer
    assign_function__SlamMap__positive_and0_x,  // assign(index, value) function pointer
    resize_function__SlamMap__positive_and0_x  // resize(index) function pointer
  },
  {
    "negative_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::SlamMap, negative_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SlamMap__negative_x,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SlamMap__negative_x,  // fetch(index, &value) function pointer
    assign_function__SlamMap__negative_x,  // assign(index, value) function pointer
    resize_function__SlamMap__negative_x  // resize(index) function pointer
  },
  {
    "positive_and0_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::SlamMap, positive_and0_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SlamMap__positive_and0_y,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SlamMap__positive_and0_y,  // fetch(index, &value) function pointer
    assign_function__SlamMap__positive_and0_y,  // assign(index, value) function pointer
    resize_function__SlamMap__positive_and0_y  // resize(index) function pointer
  },
  {
    "negative_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::SlamMap, negative_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SlamMap__negative_y,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SlamMap__negative_y,  // fetch(index, &value) function pointer
    assign_function__SlamMap__negative_y,  // assign(index, value) function pointer
    resize_function__SlamMap__negative_y  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SlamMap_message_members = {
  "semmap_interfaces::msg",  // message namespace
  "SlamMap",  // message name
  4,  // number of fields
  sizeof(semmap_interfaces::msg::SlamMap),
  SlamMap_message_member_array,  // message members
  SlamMap_init_function,  // function to initialize message memory (memory has to be allocated)
  SlamMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SlamMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SlamMap_message_members,
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
get_message_type_support_handle<semmap_interfaces::msg::SlamMap>()
{
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::SlamMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, msg, SlamMap)() {
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::SlamMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
