#include "money.h"

class Dollar : public Money {
 public:
  Dollar(int amount);
  Money times(int multiplier);
};
