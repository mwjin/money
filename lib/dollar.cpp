#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
Money* Dollar::times(int multiplier) {
  return new Dollar(this->amount * multiplier);
};
