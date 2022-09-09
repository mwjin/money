#include <gtest/gtest.h>

#include "dollar.h"
#include "franc.h"

TEST(MoneyTest, TestMultiplication) {
  Dollar five(5);
  EXPECT_TRUE(Dollar(10) == *five.times(2));
  EXPECT_TRUE(Dollar(15) == *five.times(3));
}

TEST(MoneyTest, TestEquality) {
  EXPECT_TRUE(Dollar(5) == Dollar(5));
  EXPECT_FALSE(Dollar(5) == Dollar(6));
}

TEST(MoneyTest, TestFrancMultiplication) {
  Franc five(5);
  EXPECT_TRUE(Franc(10) == *five.times(2));
  EXPECT_TRUE(Franc(15) == *five.times(3));
}

TEST(MoneyTest, TestFrancEquality) {
  EXPECT_TRUE(Franc(5) == Franc(5));
  EXPECT_FALSE(Franc(5) == Franc(6));
}

TEST(MoneyTest, TestCompareDollarWithFranc) {
  EXPECT_FALSE(Franc(5) == Dollar(5));
}
