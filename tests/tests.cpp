#include <gtest/gtest.h>

#include <cpp_template/cpp_template.hpp>

// GIVEN: --
// WHEN: Calling default constructor
// THEN: Member of class has correct value
TEST(cpp_template_dummy, default_constructor) {
  auto dummy = cpp_template::dummy{};

  EXPECT_EQ(dummy.value(), 0u);
}

// GIVEN: Value
// WHEN: Calling constructor with value
// THEN: Member of class has correct
TEST(cpp_template_dummy, constructor_with_value) {
  auto value = std::uint32_t{42u};

  auto dummy = cpp_template::dummy{value};

  EXPECT_EQ(dummy.value(), value);
}

// GIVEN: Value
// WHEN: Calling set_value
// THEN: Member of class has correct
TEST(cpp_template_dummy, set_value) {
  auto value = std::uint32_t{42u};

  auto dummy = cpp_template::dummy{};

  auto old_value = dummy.value();

  dummy.set_value(42u);

  EXPECT_EQ(dummy.value(), value);
  EXPECT_NE(dummy.value(), old_value);
}

auto main(int argc, char** argv) -> int {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
