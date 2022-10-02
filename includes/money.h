#ifndef MONEY_H_
#define MONEY_H_

#include <memory>
#include <string>

class Money {
  friend bool operator==(const Money& lhs, const Money& rhs);
  friend bool operator!=(const Money& lhs, const Money& rhs);

 public:
  Money(int amount, std::string currency);
  virtual ~Money() = default;
  virtual std::unique_ptr<Money> times(int multiplier) = 0;
  std::string currency();
  static std::unique_ptr<Money> dollar(int amount);
  static std::unique_ptr<Money> franc(int amount);

 protected:
  int amount;
  std::string currency_;
};
void say_hello();

#endif
