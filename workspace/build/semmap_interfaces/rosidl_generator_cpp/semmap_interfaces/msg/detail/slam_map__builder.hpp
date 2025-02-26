// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from semmap_interfaces:msg/SlamMap.idl
// generated code does not contain a copyright notice

#ifndef SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__BUILDER_HPP_
#define SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "semmap_interfaces/msg/detail/slam_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace semmap_interfaces
{

namespace msg
{

namespace builder
{

class Init_SlamMap_negative_y
{
public:
  explicit Init_SlamMap_negative_y(::semmap_interfaces::msg::SlamMap & msg)
  : msg_(msg)
  {}
  ::semmap_interfaces::msg::SlamMap negative_y(::semmap_interfaces::msg::SlamMap::_negative_y_type arg)
  {
    msg_.negative_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::semmap_interfaces::msg::SlamMap msg_;
};

class Init_SlamMap_positive_and0_y
{
public:
  explicit Init_SlamMap_positive_and0_y(::semmap_interfaces::msg::SlamMap & msg)
  : msg_(msg)
  {}
  Init_SlamMap_negative_y positive_and0_y(::semmap_interfaces::msg::SlamMap::_positive_and0_y_type arg)
  {
    msg_.positive_and0_y = std::move(arg);
    return Init_SlamMap_negative_y(msg_);
  }

private:
  ::semmap_interfaces::msg::SlamMap msg_;
};

class Init_SlamMap_negative_x
{
public:
  explicit Init_SlamMap_negative_x(::semmap_interfaces::msg::SlamMap & msg)
  : msg_(msg)
  {}
  Init_SlamMap_positive_and0_y negative_x(::semmap_interfaces::msg::SlamMap::_negative_x_type arg)
  {
    msg_.negative_x = std::move(arg);
    return Init_SlamMap_positive_and0_y(msg_);
  }

private:
  ::semmap_interfaces::msg::SlamMap msg_;
};

class Init_SlamMap_positive_and0_x
{
public:
  Init_SlamMap_positive_and0_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlamMap_negative_x positive_and0_x(::semmap_interfaces::msg::SlamMap::_positive_and0_x_type arg)
  {
    msg_.positive_and0_x = std::move(arg);
    return Init_SlamMap_negative_x(msg_);
  }

private:
  ::semmap_interfaces::msg::SlamMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::semmap_interfaces::msg::SlamMap>()
{
  return semmap_interfaces::msg::builder::Init_SlamMap_positive_and0_x();
}

}  // namespace semmap_interfaces

#endif  // SEMMAP_INTERFACES__MSG__DETAIL__SLAM_MAP__BUILDER_HPP_
