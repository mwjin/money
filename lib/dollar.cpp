#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
Dollar Dollar::times(int multiplier) {
  this->amount *= multiplier;
  return *this;
};
