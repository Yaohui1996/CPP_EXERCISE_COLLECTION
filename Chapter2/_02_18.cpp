#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 10;
    int b = 20;

    int *pa = &a;
    int *pb = &b;

    cout << a << endl;
    cout << b << endl;
    cout << *pa << endl;
    cout << *pb << endl;

    *pa = 100;

    cout << a << endl;
    cout << b << endl;
    cout << *pa << endl;
    cout << *pb << endl;

    pa = &b;
    cout << a << endl;
    cout << b << endl;
    cout << *pa << endl;
    cout << *pb << endl;

    return 0;
}