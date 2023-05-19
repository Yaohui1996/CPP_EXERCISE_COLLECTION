#include "Account.h"

#include <iostream>

using namespace std;

Account::Account(const int32_t balance) {
  if (balance < 0) {
    this->balance_ = 0;
    cerr << "the input balance is invalid! [input balance=" << balance << "]"
         << endl;
  } else {
    this->balance_ = balance;
  }
}

void Account::credit(const int32_t value) { this->balance_ += value; }

void Account::debit(const int32_t value) {
  if (this->balance_ - value < 0) {
    cerr << "Debit amount exceeded account balance." << endl;
  } else {
    this->balance_ -= value;
  }
}
int32_t Account::getBalance() const { return this->balance_; }