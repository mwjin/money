#include "franc.h"

Franc::Franc(int amount) : Money{amount, "CHF"} {}
std::unique_ptr<Money> Franc::times(int multiplier) {
  return std::make_unique<Money>(this->amount * multiplier, currency_);
};
