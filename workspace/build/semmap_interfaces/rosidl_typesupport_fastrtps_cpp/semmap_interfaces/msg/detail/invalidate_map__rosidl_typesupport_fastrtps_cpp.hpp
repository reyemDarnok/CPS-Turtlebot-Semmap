// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from semmap_interfaces:msg/InvalidateMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "semmap_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "semmap_interfaces/msg/detail/invalidate_map__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace semmap_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
cdr_serialize(
  const semmap_interfaces::msg::InvalidateMap & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  semmap_interfaces::msg::InvalidateMap & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
get_serialized_size(
  const semmap_interfaces::msg::InvalidateMap & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
max_serialized_size_InvalidateMap(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace semmap_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_semmap_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, semmap_interfaces, msg, InvalidateMap)();

#ifdef __cplusplus
}
#endif

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__INVALIDATE_MAP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
