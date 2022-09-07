#include "money.h"

class Franc : public Money {
 public:
  Franc(int amount);
  Franc times(int multiplier);
};
