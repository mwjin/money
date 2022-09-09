#include "money.h"

#include <iostream>

bool Money::operator==(const Money& other) {
  return this->amount == other.amount && typeid(*this) == typeid(other);
};
void say_hello() { std::cout << "Hello, from Money!\n"; }
