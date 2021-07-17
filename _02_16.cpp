#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    cout << "i: " << i << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "d: " << d << endl;
    cout << "*********************" << endl;

    r2 = r1;
    cout << "i: " << i << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "d: " << d << endl;
    cout << "*********************" << endl;

    i = r2;
    cout << "i: " << i << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "d: " << d << endl;
    cout << "*********************" << endl;

    r1 = d;
    cout << "i: " << i << endl;
    cout << "r1: " << r1 << endl;
    cout << "r2: " << r2 << endl;
    cout << "d: " << d << endl;

    return 0;
}