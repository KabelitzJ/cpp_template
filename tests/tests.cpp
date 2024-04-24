#include <gtest/gtest.h>

#include <cpp_template/cpp_template.hpp>

TEST(cpp_template_add, should_work) {
  EXPECT_EQ(cpp_template::add(1, 2), 3);
  EXPECT_EQ(cpp_template::add(2, 3), 5);
  EXPECT_EQ(cpp_template::add(3, 4), 7);
}

auto main(int argc, char** argv) -> int {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
