/* Testing file for Account class */

#include "Account.h"

int main(){
  Account a1(885643);
  a1.print();
  a1.credit(8000);
  a1.print();
  a1.debit(5000);
  a1.print();

  return 0;
}
