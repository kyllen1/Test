/* Account class header declaration (Account.h) */

class Account{
private:
  int accountNumber;
  double balance;
public:
  Account(int accountNumber, double balance = 0.0);
  int getAccountNumber() const;
  int getBalance() const;
  void setBalance(double balance);
  void credit(double amount);
  void debit(double amount);
  void print() const;
};
