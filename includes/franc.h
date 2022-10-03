#ifndef FRANC_H_
#define FRANC_H_

#include "money.h"

class Franc : public Money {
 public:
  Franc(int amount);
  ~Franc() = default;
  std::unique_ptr<Money> times(int multiplier);
};

#endif
