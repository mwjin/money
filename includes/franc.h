#ifndef FRANC_H_
#define FRANC_H_

#include "money.h"

class Franc : public Money {
 private:
  std::string currency_;

 public:
  Franc(int amount);
  virtual ~Franc() = default;
  virtual std::unique_ptr<Money> times(int multiplier) override;
  virtual std::string currency() override;
};

#endif
