#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
Money Dollar::times(int multiplier) {
  return Dollar(this->amount * multiplier);
};
