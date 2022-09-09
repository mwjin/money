#include "money.h"

#include <iostream>

#include "dollar.h"
#include "franc.h"

bool Money::operator==(const Money& other) {
  return this->amount == other.amount && typeid(*this) == typeid(other);
};

Money* Money::dollar(int amount) { return new Dollar(amount); }
Money* Money::franc(int amount) { return new Franc(amount); }

void say_hello() { std::cout << "Hello, from Money!\n"; }
