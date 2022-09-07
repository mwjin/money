#include "dollar.h"

#include <gtest/gtest.h>

TEST(DollarTest, TestMultiplication) {
  Dollar five(5);
  EXPECT_TRUE(Dollar(10) == five.times(2));
  EXPECT_TRUE(Dollar(15) == five.times(3));
}

TEST(DollarTest, TestEquality) {
  Dollar five(5), other(5), six(6);
  EXPECT_TRUE(five == other);
  EXPECT_FALSE(five == six);
}
