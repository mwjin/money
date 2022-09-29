#ifndef MONEY_H_
#define MONEY_H_

class Money {
  friend bool operator==(const Money& lhs, const Money& rhs);
  friend bool operator!=(const Money& lhs, const Money& rhs);

 public:
  virtual Money* times(int multiplier) = 0;
  virtual ~Money() = default;
  static Money* dollar(int amount);
  static Money* franc(int amount);

 protected:
  int amount;
};
void say_hello();

#endif
