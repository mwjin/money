#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(HelloTest, BasicAssertions2) { EXPECT_EQ(1 + 2, 3); }
TEST(HelloTest, BasicAssertions3) { EXPECT_NE(1 + 2, 4); }
