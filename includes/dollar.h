#include "money.h"

class Dollar : public Money {
 public:
  Dollar(int amount);
  Dollar times(int multiplier);
};
