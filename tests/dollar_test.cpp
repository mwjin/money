#include "dollar.h"

#include <gtest/gtest.h>

TEST(DollarTest, TestMultiplication) {
  Dollar five(5);
  EXPECT_TRUE(Dollar(10) == five.times(2));
  EXPECT_TRUE(Dollar(15) == five.times(3));
}

TEST(DollarTest, TestEquality) {
  EXPECT_TRUE(Dollar(5) == Dollar(5));
  EXPECT_FALSE(Dollar(5) == Dollar(6));
}
