#include "money.h"

class Dollar : Money {
 public:
  Dollar(int amount);
  Dollar times(int multiplier);
  bool operator==(const Dollar& other);
};
