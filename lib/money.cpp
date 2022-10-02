#include "money.h"

#include <iostream>

#include "dollar.h"
#include "franc.h"

Money::Money(int amount) : amount{amount} {}

std::unique_ptr<Money> Money::dollar(int amount) {
  return std::make_unique<Dollar>(amount);
}
std::unique_ptr<Money> Money::franc(int amount) {
  return std::make_unique<Franc>(amount);
}

bool operator==(const Money& lhs, const Money& rhs) {
  return lhs.amount == rhs.amount && typeid(lhs) == typeid(rhs);
};

bool operator!=(const Money& lhs, const Money& rhs) { return !(lhs == rhs); }
void say_hello() { std::cout << "Hello, from Money!\n"; }
