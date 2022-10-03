#include "money.h"

#include <gtest/gtest.h>

TEST(MoneyTest, TestMultiplication) {
  std::unique_ptr<Money> five{Money::dollar(5)};
  EXPECT_EQ(*Money::dollar(10), *five->times(2));
  EXPECT_EQ(*Money::dollar(15), *five->times(3));
}

TEST(MoneyTest, TestEquality) {
  EXPECT_EQ(*Money::dollar(5), *Money::dollar(5));
  EXPECT_NE(*Money::dollar(5), *Money::dollar(6));
}

TEST(MoneyTest, TestFrancMultiplication) {
  std::unique_ptr<Money> five{Money::franc(5)};
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

TEST(MoneyTest, TestCurrency) {
  EXPECT_EQ("USD", Money::dollar(1)->currency());
  EXPECT_EQ("CHF", Money::franc(1)->currency());
}

TEST(MoneyTest, TestDifferentClassEquality) {
  EXPECT_EQ(Money(1, "CHF"), *Money::franc(1));
}
