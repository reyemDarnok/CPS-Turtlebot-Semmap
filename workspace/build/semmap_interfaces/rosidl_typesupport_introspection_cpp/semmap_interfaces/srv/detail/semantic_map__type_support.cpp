// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from semmap_interfaces:srv/SemanticMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "semmap_interfaces/srv/detail/semantic_map__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace semmap_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SemanticMap_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semmap_interfaces::srv::SemanticMap_Request(_init);
}

void SemanticMap_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semmap_interfaces::srv::SemanticMap_Request *>(message_memory);
  typed_message->~SemanticMap_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SemanticMap_Request_message_member_array[1] = {
  {
    "request_priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Request, request_priority),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SemanticMap_Request_message_members = {
  "semmap_interfaces::srv",  // message namespace
  "SemanticMap_Request",  // message name
  1,  // number of fields
  sizeof(semmap_interfaces::srv::SemanticMap_Request),
  SemanticMap_Request_message_member_array,  // message members
  SemanticMap_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SemanticMap_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SemanticMap_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SemanticMap_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace semmap_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<semmap_interfaces::srv::SemanticMap_Request>()
{
  return &::semmap_interfaces::srv::rosidl_typesupport_introspection_cpp::SemanticMap_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, srv, SemanticMap_Request)() {
  return &::semmap_interfaces::srv::rosidl_typesupport_introspection_cpp::SemanticMap_Request_message_type_support_handle;
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
// #include "semmap_interfaces/srv/detail/semantic_map__struct.hpp"
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

namespace semmap_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SemanticMap_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) semmap_interfaces::srv::SemanticMap_Response(_init);
}

void SemanticMap_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<semmap_interfaces::srv::SemanticMap_Response *>(message_memory);
  typed_message->~SemanticMap_Response();
}

size_t size_function__SemanticMap_Response__positive_and0_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SemanticMap_Response__positive_and0_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SemanticMap_Response__positive_and0_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SemanticMap_Response__positive_and0_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__negative_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SemanticMap_Response__negative_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SemanticMap_Response__negative_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SemanticMap_Response__negative_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__positive_and0_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SemanticMap_Response__positive_and0_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SemanticMap_Response__positive_and0_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SemanticMap_Response__positive_and0_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__negative_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__SemanticMap_Response__negative_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__SemanticMap_Response__negative_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__SemanticMap_Response__negative_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__object_tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticMap_Response__object_tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticMap_Response__object_tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticMap_Response__object_tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SemanticMap_Response__object_tags(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SemanticMap_Response__object_tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SemanticMap_Response__object_tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SemanticMap_Response__object_tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__object_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticMap_Response__object_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticMap_Response__object_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticMap_Response__object_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SemanticMap_Response__object_x(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SemanticMap_Response__object_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SemanticMap_Response__object_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SemanticMap_Response__object_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__object_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticMap_Response__object_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticMap_Response__object_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticMap_Response__object_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SemanticMap_Response__object_y(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SemanticMap_Response__object_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SemanticMap_Response__object_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SemanticMap_Response__object_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticMap_Response__object_elevation(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticMap_Response__object_elevation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticMap_Response__object_elevation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticMap_Response__object_elevation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__SemanticMap_Response__object_elevation(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__SemanticMap_Response__object_elevation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__SemanticMap_Response__object_elevation(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__SemanticMap_Response__object_elevation(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SemanticMap_Response_message_member_array[8] = {
  {
    "positive_and0_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, positive_and0_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__positive_and0_x,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SemanticMap_Response__positive_and0_x,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__positive_and0_x,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__positive_and0_x  // resize(index) function pointer
  },
  {
    "negative_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, negative_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__negative_x,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SemanticMap_Response__negative_x,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__negative_x,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__negative_x  // resize(index) function pointer
  },
  {
    "positive_and0_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, positive_and0_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__positive_and0_y,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SemanticMap_Response__positive_and0_y,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__positive_and0_y,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__positive_and0_y  // resize(index) function pointer
  },
  {
    "negative_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, negative_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__negative_y,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__SemanticMap_Response__negative_y,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__negative_y,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__negative_y  // resize(index) function pointer
  },
  {
    "object_tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, object_tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__object_tags,  // size() function pointer
    get_const_function__SemanticMap_Response__object_tags,  // get_const(index) function pointer
    get_function__SemanticMap_Response__object_tags,  // get(index) function pointer
    fetch_function__SemanticMap_Response__object_tags,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__object_tags,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__object_tags  // resize(index) function pointer
  },
  {
    "object_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, object_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__object_x,  // size() function pointer
    get_const_function__SemanticMap_Response__object_x,  // get_const(index) function pointer
    get_function__SemanticMap_Response__object_x,  // get(index) function pointer
    fetch_function__SemanticMap_Response__object_x,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__object_x,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__object_x  // resize(index) function pointer
  },
  {
    "object_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, object_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__object_y,  // size() function pointer
    get_const_function__SemanticMap_Response__object_y,  // get_const(index) function pointer
    get_function__SemanticMap_Response__object_y,  // get(index) function pointer
    fetch_function__SemanticMap_Response__object_y,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__object_y,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__object_y  // resize(index) function pointer
  },
  {
    "object_elevation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(semmap_interfaces::srv::SemanticMap_Response, object_elevation),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticMap_Response__object_elevation,  // size() function pointer
    get_const_function__SemanticMap_Response__object_elevation,  // get_const(index) function pointer
    get_function__SemanticMap_Response__object_elevation,  // get(index) function pointer
    fetch_function__SemanticMap_Response__object_elevation,  // fetch(index, &value) function pointer
    assign_function__SemanticMap_Response__object_elevation,  // assign(index, value) function pointer
    resize_function__SemanticMap_Response__object_elevation  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SemanticMap_Response_message_members = {
  "semmap_interfaces::srv",  // message namespace
  "SemanticMap_Response",  // message name
  8,  // number of fields
  sizeof(semmap_interfaces::srv::SemanticMap_Response),
  SemanticMap_Response_message_member_array,  // message members
  SemanticMap_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SemanticMap_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SemanticMap_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SemanticMap_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace semmap_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<semmap_interfaces::srv::SemanticMap_Response>()
{
  return &::semmap_interfaces::srv::rosidl_typesupport_introspection_cpp::SemanticMap_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, srv, SemanticMap_Response)() {
  return &::semmap_interfaces::srv::rosidl_typesupport_introspection_cpp::SemanticMap_Response_message_type_support_handle;
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
// #include "semmap_interfaces/srv/detail/semantic_map__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace semmap_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SemanticMap_service_members = {
  "semmap_interfaces::srv",  // service namespace
  "SemanticMap",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<semmap_interfaces::srv::SemanticMap>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SemanticMap_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SemanticMap_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace semmap_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<semmap_interfaces::srv::SemanticMap>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::semmap_interfaces::srv::rosidl_typesupport_introspection_cpp::SemanticMap_service_type_support_handle;
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
        ::semmap_interfaces::srv::SemanticMap_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::semmap_interfaces::srv::SemanticMap_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, semmap_interfaces, srv, SemanticMap)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<semmap_interfaces::srv::SemanticMap>();
}

#ifdef __cplusplus
}
#endif
