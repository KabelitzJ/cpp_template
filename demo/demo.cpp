#include <cpp_template/cpp_template.hpp>
#include <iostream>

auto main() -> int {
  auto dummy = cpp_template::dummy{};

  dummy.set_value(42u);

  std::cout << "Value: " << dummy.value() << std::endl;

  return 0;
}
