class Dollar {
 public:
  int amount;
  Dollar(int amount);
  Dollar times(int multiplier);
  bool equals(Dollar other);
};
