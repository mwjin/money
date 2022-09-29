#ifndef MONEY_H_
#define MONEY_H_

#include <memory>

class Money {
  friend bool operator==(const Money& lhs, const Money& rhs);
  friend bool operator!=(const Money& lhs, const Money& rhs);

 public:
  virtual std::unique_ptr<Money> times(int multiplier) = 0;
  virtual ~Money() = default;
  static std::unique_ptr<Money> dollar(int amount);
  static std::unique_ptr<Money> franc(int amount);

 protected:
  int amount;
};
void say_hello();

#endif
