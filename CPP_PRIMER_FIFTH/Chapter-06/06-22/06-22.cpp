//
// Created by Yaohui Li on 2021/2/14.
//
#include <iostream>

using namespace std;

void changePointer(int *&p1, int *&p2);

int main()
{
    int a = 55;
    int b = 12;
    int *p1 = &a;
    int *p2 = &b;
    cout << *p1 << " and " << *p2 << endl;
    changePointer(p1, p2);
    cout << *p1 << " and " << *p2 << endl;

    return 0;
}

void changePointer(int *&p1, int *&p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}