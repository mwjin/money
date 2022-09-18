#include "money.h"

#include <gtest/gtest.h>

TEST(MoneyTest, TestMultiplication) {
  Money *five{Money::dollar(5)};
  EXPECT_EQ(*Money::dollar(10), *five->times(2));
  EXPECT_EQ(*Money::dollar(15), *five->times(3));
}

TEST(MoneyTest, TestEquality) {
  EXPECT_EQ(*Money::dollar(5), *Money::dollar(5));
  EXPECT_NE(*Money::dollar(5), *Money::dollar(6));
}

TEST(MoneyTest, TestFrancMultiplication) {
  Money *five{Money::franc(5)};
  EXPECT_EQ(*Money::franc(10), *five->times(2));
  EXPECT_EQ(*Money::franc(15), *five->times(3));
}

TEST(MoneyTest, TestFrancEquality) {
  EXPECT_EQ(*Money::franc(5), *Money::franc(5));
  EXPECT_NE(*Money::franc(5), *Money::franc(6));
}

TEST(MoneyTest, TestCompareDollarWithFranc) {
  EXPECT_NE(*Money::franc(5), *Money::dollar(5));
}
