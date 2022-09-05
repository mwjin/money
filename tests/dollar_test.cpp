#include "dollar.h"

#include <gtest/gtest.h>

TEST(DollarTest, TestMultiplication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(10, product.amount);
  product = five.times(3);
  EXPECT_EQ(15, product.amount);
}
