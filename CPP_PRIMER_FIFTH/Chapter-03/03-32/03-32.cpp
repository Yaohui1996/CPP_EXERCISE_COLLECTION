#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[10];
    for (size_t i = 0; i < 10; ++i)
    {
        a[i] = i;
        cout << a[i] << endl;
    }

    int b[10];
    for (size_t i = 0; i < 10; ++i)
    {
        b[i] = a[i];
        cout << b[i] << endl;
    }

    vector<int> v;
    for (const int &i : a)
    {
        v.push_back(i);
    }
    for (const int &i : v)
    {
        cout << i << endl;
    }

    return 0;
}