#include "dollar.h"

Dollar::Dollar(int amount) : Money{amount} {};
std::unique_ptr<Money> Dollar::times(int multiplier) {
  return std::make_unique<Dollar>(this->amount * multiplier);
};

std::string Dollar::currency() { return "USD"; }
