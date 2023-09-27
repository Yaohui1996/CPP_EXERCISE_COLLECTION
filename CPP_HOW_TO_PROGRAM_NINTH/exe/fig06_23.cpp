#include <iomanip>
#include <iostream>

using namespace std;

int square(const int x)
{
    cout << "square of integer " << x << " is " << endl;
    return x * x;
}

double square(const double x)
{
    cout << "square of double " << x << " is " << endl;
    return x * x;
}

int main()
{
    cout << square(7) << endl;
    cout << square(7.5) << endl;
    return 0;
}