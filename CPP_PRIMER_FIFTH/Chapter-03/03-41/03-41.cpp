#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4};
    vector<int> v;
    for (const int &x : a)
    {
        v.push_back(x);
    }

    return 0;
}