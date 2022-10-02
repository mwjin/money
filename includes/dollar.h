#ifndef DOLLAR_H_
#define DOLLAR_H_

#include "money.h"

class Dollar : public Money {
 public:
  Dollar(int amount);
  virtual ~Dollar() = default;
  virtual std::unique_ptr<Money> times(int multiplier) override;
};

#endif
