#include <iostream>

using namespace std;

double calAbs(double x);

int main()
{
    cout << calAbs(-3.2) << endl;
    cout << calAbs(6.6) << endl;

    return 0;
}

double calAbs(double x)
{
    return (x >= 0 ? x : -x);
}
