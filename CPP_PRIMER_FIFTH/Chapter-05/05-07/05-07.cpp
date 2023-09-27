#include <iostream>

using namespace std;

int get_val(int);

int main()
{
    // a
    int ival1 = 1;
    int ival2 = 2;

    if (ival1 != ival2)
        ival1 = ival2;
    else
        ival1 = ival2 = 0;

    // b
    int ival = 1;
    int minval = 2;
    int occurs = 0;

    if (ival < minval)
    {
        minval = ival;
        occurs = 1;
    }

    // c

    if (ival == get_val(6))
        cout << "ival = " << ival << endl;
    if (!ival)
        cout << "ival = 0\n";

    // d
    if (ival == 0)
        ival = get_val(6);

    return 0;
}

int get_val(int x)
{
    return x;
}