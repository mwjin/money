#include "franc.h"

Franc::Franc(int amount) { this->amount = amount; };
std::unique_ptr<Money> Franc::times(int multiplier) {
  return std::make_unique<Franc>(this->amount * multiplier);
};

std::string Franc::currency() { return "CHF"; }
