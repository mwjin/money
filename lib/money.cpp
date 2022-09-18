#include "money.h"

#include <iostream>

#include "dollar.h"
#include "franc.h"

Money* Money::dollar(int amount) { return new Dollar(amount); }
Money* Money::franc(int amount) { return new Franc(amount); }

bool operator==(const Money& lhs, const Money& rhs) {
  return lhs.amount == rhs.amount && typeid(lhs) == typeid(rhs);
};

bool operator!=(const Money& lhs, const Money& rhs) { return !(lhs == rhs); }
void say_hello() { std::cout << "Hello, from Money!\n"; }
