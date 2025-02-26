// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semmap_interfaces:msg/PositionHistory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semmap_interfaces/msg/detail/position_history__struct.hpp"
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

void PositionHistory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semmap_interfaces::msg::PositionHistory(_init);
}

void PositionHistory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semmap_interfaces::msg::PositionHistory *>(message_memory);
  typed_message->~PositionHistory();
}

size_t size_function__PositionHistory__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PositionHistory__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PositionHistory__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PositionHistory__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PositionHistory__x(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PositionHistory__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PositionHistory__x(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PositionHistory__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PositionHistory__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PositionHistory__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PositionHistory__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PositionHistory__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PositionHistory__y(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PositionHistory__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PositionHistory__y(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PositionHistory__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PositionHistory__rotation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PositionHistory__rotation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PositionHistory__rotation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PositionHistory__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PositionHistory__rotation(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PositionHistory__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PositionHistory__rotation(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PositionHistory__rotation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PositionHistory__timestamp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PositionHistory__timestamp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__PositionHistory__timestamp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__PositionHistory__timestamp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PositionHistory__timestamp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PositionHistory__timestamp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PositionHistory__timestamp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__PositionHistory__timestamp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PositionHistory_message_member_array[4] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::PositionHistory, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__PositionHistory__x,  // size() function pointer
    get_const_function__PositionHistory__x,  // get_const(index) function pointer
    get_function__PositionHistory__x,  // get(index) function pointer
    fetch_function__PositionHistory__x,  // fetch(index, &value) function pointer
    assign_function__PositionHistory__x,  // assign(index, value) function pointer
    resize_function__PositionHistory__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::PositionHistory, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__PositionHistory__y,  // size() function pointer
    get_const_function__PositionHistory__y,  // get_const(index) function pointer
    get_function__PositionHistory__y,  // get(index) function pointer
    fetch_function__PositionHistory__y,  // fetch(index, &value) function pointer
    assign_function__PositionHistory__y,  // assign(index, value) function pointer
    resize_function__PositionHistory__y  // resize(index) function pointer
  },
  {
    "rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::PositionHistory, rotation),  // bytes offset in struct
    nullptr,  // default value
    size_function__PositionHistory__rotation,  // size() function pointer
    get_const_function__PositionHistory__rotation,  // get_const(index) function pointer
    get_function__PositionHistory__rotation,  // get(index) function pointer
    fetch_function__PositionHistory__rotation,  // fetch(index, &value) function pointer
    assign_function__PositionHistory__rotation,  // assign(index, value) function pointer
    resize_function__PositionHistory__rotation  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::msg::PositionHistory, timestamp),  // bytes offset in struct
    nullptr,  // default value
    size_function__PositionHistory__timestamp,  // size() function pointer
    get_const_function__PositionHistory__timestamp,  // get_const(index) function pointer
    get_function__PositionHistory__timestamp,  // get(index) function pointer
    fetch_function__PositionHistory__timestamp,  // fetch(index, &value) function pointer
    assign_function__PositionHistory__timestamp,  // assign(index, value) function pointer
    resize_function__PositionHistory__timestamp  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PositionHistory_message_members = {
  "semmap_interfaces::msg",  // message namespace
  "PositionHistory",  // message name
  4,  // number of fields
  sizeof(semmap_interfaces::msg::PositionHistory),
  PositionHistory_message_member_array,  // message members
  PositionHistory_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionHistory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PositionHistory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PositionHistory_message_members,
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
get_message_type_support_handle<semmap_interfaces::msg::PositionHistory>()
{
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::PositionHistory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, msg, PositionHistory)() {
  return &::semmap_interfaces::msg::rosidl_typesupport_introspection_cpp::PositionHistory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
