class Dollar {
 public:
  Dollar(int amount);
  Dollar times(int multiplier);
  bool operator==(const Dollar& other);
 private:
  int amount;
};
