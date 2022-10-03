#include "dollar.h"

Dollar::Dollar(int amount) : Money{amount, "USD"} {};
std::unique_ptr<Money> Dollar::times(int multiplier) {
  return std::make_unique<Money>(this->amount * multiplier, currency_);
};
