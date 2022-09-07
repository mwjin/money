#ifndef MONEY_H_
#define MONEY_H_

class Money {
 public:
  bool operator==(const Money& other);

 protected:
  int amount;
};
void say_hello();

#endif
