// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semmap_interfaces:msg/EmergencyStop.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semmap_interfaces/msg/detail/emergency_stop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semmap_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyStop & msg,
  std::ostream & out)
{
  out << "{";
  // member: cause
  {
    out << "cause: ";
    rosidl_generator_traits::value_to_yaml(msg.cause, out);
    out << ", ";
  }

  // member: solvable_by_backup
  {
    out << "solvable_by_backup: ";
    rosidl_generator_traits::value_to_yaml(msg.solvable_by_backup, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyStop & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cause
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cause: ";
    rosidl_generator_traits::value_to_yaml(msg.cause, out);
    out << "\n";
  }

  // member: solvable_by_backup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solvable_by_backup: ";
    rosidl_generator_traits::value_to_yaml(msg.solvable_by_backup, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyStop & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace semmap_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use semmap_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const semmap_interfaces::msg::EmergencyStop & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::msg::EmergencyStop & msg)
{
  return semmap_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::msg::EmergencyStop>()
{
  return "semmap_interfaces::msg::EmergencyStop";
}

template<>
inline const char * name<semmap_interfaces::msg::EmergencyStop>()
{
  return "semmap_interfaces/msg/EmergencyStop";
}

template<>
struct has_fixed_size<semmap_interfaces::msg::EmergencyStop>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<semmap_interfaces::msg::EmergencyStop>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<semmap_interfaces::msg::EmergencyStop>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__EMERGENCY_STOP__TRAITS_HPP_
