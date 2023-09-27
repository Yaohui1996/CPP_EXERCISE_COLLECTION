#include <iostream>

using namespace std;

int main()
{
    int sum = 0, val = 1;
    for (int val = 1; val <= 10; sum += val, ++val)
    { /*可读性降低了*/
    }

    cout << sum << endl;
    return 0;
}