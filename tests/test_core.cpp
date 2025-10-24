/// Additional Google Test for core behavior
#include <gtest/gtest.h>
#include <string>

TEST(CoreTest, SimpleMath) { EXPECT_EQ(2 + 3, 5); }

TEST(CoreTest, StringCompare) {
  const std::string str1("hello");
  const std::string str2("hello");
  EXPECT_EQ(str1, str2);
}
