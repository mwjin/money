#include "money.h"

#include <iostream>

#include "dollar.h"
#include "franc.h"

Money::Money(int amount, std::string currency)
    : amount{amount}, currency_{currency} {}

std::unique_ptr<Money> Money::times(int multiplier) {
  return std::make_unique<Money>(this->amount * multiplier, currency_);
}

std::string Money::currency() { return this->currency_; }

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

std::ostream& operator<<(std::ostream& os, const Money& obj) {
  os << obj.amount << ' ' << obj.currency_;
  return os;
}
