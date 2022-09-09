#ifndef MONEY_H_
#define MONEY_H_

class Money {
 public:
  virtual bool operator==(const Money& other);
  virtual Money* times(int multiplier) = 0;
  static Money* dollar(int amount);

 protected:
  int amount;
};
void say_hello();

#endif
