class Franc {
 public:
  Franc(int amount);
  Franc times(int multiplier);
  bool operator==(const Franc& other);
 private:
  int amount;
};
