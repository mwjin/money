#include "money.h"

class Franc : public Money {
 public:
  Franc(int amount);
  Money times(int multiplier);
};
