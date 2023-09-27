#include <iostream>
#include <string>

#include "Account.h"

using namespace std;

int main()
{
    Account account(100);
    cout << account.getBalance() << endl;
    account.credit(200);
    cout << account.getBalance() << endl;
    account.debit(279);
    cout << account.getBalance() << endl;
    account.debit(333);
    cout << account.getBalance() << endl;

    return 0;
}