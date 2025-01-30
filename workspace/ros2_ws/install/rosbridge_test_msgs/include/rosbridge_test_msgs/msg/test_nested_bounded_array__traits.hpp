// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosbridge_test_msgs:msg/TestNestedBoundedArray.idl
// generated code does not contain a copyright notice

#ifndef ROSBRIDGE_TEST_MSGS__MSG__TEST_NESTED_BOUNDED_ARRAY__TRAITS_HPP_
#define ROSBRIDGE_TEST_MSGS__MSG__TEST_NESTED_BOUNDED_ARRAY__TRAITS_HPP_

#include "rosbridge_test_msgs/msg/test_nested_bounded_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'data'
#include "rosbridge_test_msgs/msg/test_float32_bounded_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosbridge_test_msgs::msg::TestNestedBoundedArray>()
{
  return "rosbridge_test_msgs::msg::TestNestedBoundedArray";
}

template<>
struct has_fixed_size<rosbridge_test_msgs::msg::TestNestedBoundedArray>
  : std::integral_constant<bool, has_fixed_size<rosbridge_test_msgs::msg::TestFloat32BoundedArray>::value> {};

template<>
struct has_bounded_size<rosbridge_test_msgs::msg::TestNestedBoundedArray>
  : std::integral_constant<bool, has_bounded_size<rosbridge_test_msgs::msg::TestFloat32BoundedArray>::value> {};

template<>
struct is_message<rosbridge_test_msgs::msg::TestNestedBoundedArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSBRIDGE_TEST_MSGS__MSG__TEST_NESTED_BOUNDED_ARRAY__TRAITS_HPP_
