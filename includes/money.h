#ifndef MONEY_H_
#define MONEY_H_

#include <iostream>
#include <memory>
#include <string>

class Money {
  friend bool operator==(const Money& lhs, const Money& rhs);
  friend bool operator!=(const Money& lhs, const Money& rhs);
  friend std::ostream& operator<<(std::ostream& os, const Money& obj);

 public:
  Money(int amount, std::string currency);
  ~Money() = default;
  std::unique_ptr<Money> times(int multiplier);
  std::string currency();
  static std::unique_ptr<Money> dollar(int amount);
  static std::unique_ptr<Money> franc(int amount);

 protected:
  int amount;
  std::string currency_;
};
void say_hello();

#endif
