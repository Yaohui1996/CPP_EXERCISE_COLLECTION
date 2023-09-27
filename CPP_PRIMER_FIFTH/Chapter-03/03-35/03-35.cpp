#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (const int &x : a)
        cout << x << endl;

    int *p = &a[0];
    int *e = &a[10];
    while (p != e)
    {
        *p = 0;
        ++p;
    }
    for (const int &x : a)
        cout << x << endl;

    return 0;
}