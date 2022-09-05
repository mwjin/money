#include "dollar.h"

Dollar::Dollar(int amount) { this->amount = amount; };
void Dollar::times(int multiplier) { this->amount = this->amount * 2; };
