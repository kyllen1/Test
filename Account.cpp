/* Account class implementation (Account.cpp) */

#include "Account.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;

Account::Account(int accountNumber, double balance) :
  accountNumber(accountNumber), balance(balance) { }

int Account::getAccountNumber() const{
  return accountNumber;
}
int Account::getBalance() const{
  return balance;
}
void Account::setBalance(double balance){
  this->balance = balance;
}
void Account::credit(double amount){
  balance += amount;
}
void Account::debit(double amount){
  if(!(balance < amount))
    balance -= amount;
  else
    cout << "Amount withdraw exceeds the current balance!" << "\n";
}
void Account::print() const{
  cout << fixed << setprecision(2);
  cout << "A/C no: " << accountNumber << " Balance=$" << balance << "\n";
}
