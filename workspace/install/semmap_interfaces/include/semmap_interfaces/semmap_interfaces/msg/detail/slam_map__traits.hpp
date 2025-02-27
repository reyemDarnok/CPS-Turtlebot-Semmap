// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__TRAITS_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "semmap_interfaces/msg/detail/slam_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace semmap_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SlamMap & msg,
  std::ostream & out)
{
  out << "{";
  // member: positive_and0_x
  {
    if (msg.positive_and0_x.size() == 0) {
      out << "positive_and0_x: []";
    } else {
      out << "positive_and0_x: [";
      size_t pending_items = msg.positive_and0_x.size();
      for (auto item : msg.positive_and0_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: negative_x
  {
    if (msg.negative_x.size() == 0) {
      out << "negative_x: []";
    } else {
      out << "negative_x: [";
      size_t pending_items = msg.negative_x.size();
      for (auto item : msg.negative_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: positive_and0_y
  {
    if (msg.positive_and0_y.size() == 0) {
      out << "positive_and0_y: []";
    } else {
      out << "positive_and0_y: [";
      size_t pending_items = msg.positive_and0_y.size();
      for (auto item : msg.positive_and0_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: negative_y
  {
    if (msg.negative_y.size() == 0) {
      out << "negative_y: []";
    } else {
      out << "negative_y: [";
      size_t pending_items = msg.negative_y.size();
      for (auto item : msg.negative_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SlamMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: positive_and0_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positive_and0_x.size() == 0) {
      out << "positive_and0_x: []\n";
    } else {
      out << "positive_and0_x:\n";
      for (auto item : msg.positive_and0_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: negative_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.negative_x.size() == 0) {
      out << "negative_x: []\n";
    } else {
      out << "negative_x:\n";
      for (auto item : msg.negative_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: positive_and0_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.positive_and0_y.size() == 0) {
      out << "positive_and0_y: []\n";
    } else {
      out << "positive_and0_y:\n";
      for (auto item : msg.positive_and0_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: negative_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.negative_y.size() == 0) {
      out << "negative_y: []\n";
    } else {
      out << "negative_y:\n";
      for (auto item : msg.negative_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SlamMap & msg, bool use_flow_style = false)
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
  const semmap_interfaces::msg::SlamMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  semmap_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use semmap_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const semmap_interfaces::msg::SlamMap & msg)
{
  return semmap_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<semmap_interfaces::msg::SlamMap>()
{
  return "semmap_interfaces::msg::SlamMap";
}

template<>
inline const char * name<semmap_interfaces::msg::SlamMap>()
{
  return "semmap_interfaces/msg/SlamMap";
}

template<>
struct has_fixed_size<semmap_interfaces::msg::SlamMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<semmap_interfaces::msg::SlamMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<semmap_interfaces::msg::SlamMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__TRAITS_HPP_
