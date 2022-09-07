#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
Dollar Dollar::times(int multiplier) {
  return Dollar(this->amount * multiplier);
};
bool Dollar::operator==(const Dollar& other) {
  return this->amount == other.amount;
};
