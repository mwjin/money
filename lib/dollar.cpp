#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
Dollar Dollar::times(int multiplier) {
  return Dollar(this->amount * multiplier);
};
bool Dollar::equals(Dollar other) { return true; };
