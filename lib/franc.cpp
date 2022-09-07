#include "franc.h"

Franc::Franc(int amount) { this->amount = amount; };
Franc Franc::times(int multiplier) { return Franc(this->amount * multiplier); };
bool Franc::operator==(const Franc& other) {
  return this->amount == other.amount;
};
