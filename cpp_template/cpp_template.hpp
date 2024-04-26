#ifndef CPP_TEMPLATE_HPP_
#define CPP_TEMPLATE_HPP_

#include <cinttypes>

namespace cpp_template {

class dummy {

public:

  dummy(std::uint32_t value = 0u);

  auto value() const -> std::uint32_t;

  auto set_value(std::uint32_t value) -> void;

private:

  std::uint32_t _value;

};  // class dummy

}  // namespace cpp_template

#endif  // CPP_TEMPLATE_HPP_
