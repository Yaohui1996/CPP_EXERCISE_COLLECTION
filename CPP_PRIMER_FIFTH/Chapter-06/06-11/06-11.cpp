//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>

using namespace std;

void reset(int &x);

int main()
{
    int a = 10;
    cout << "a = " << a << endl;
    reset(a);
    cout << "a = " << a << endl;

    return 0;
}

void reset(int &x)
{
    x = 0;
}