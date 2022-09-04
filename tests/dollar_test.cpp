#include "dollar.h"

#include <gtest/gtest.h>

TEST(DollarTest, TestMultiplication) {
  Dollar five(5);
  five.times(2);
  EXPECT_EQ(10, five.amount);
}
