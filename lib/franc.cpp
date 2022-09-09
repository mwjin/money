#include "franc.h"

Franc::Franc(int amount) { this->amount = amount; };
Money* Franc::times(int multiplier) {
  return new Franc(this->amount * multiplier);
};
