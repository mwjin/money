#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
std::unique_ptr<Money> Dollar::times(int multiplier) {
  return std::make_unique<Dollar>(this->amount * multiplier);
};
