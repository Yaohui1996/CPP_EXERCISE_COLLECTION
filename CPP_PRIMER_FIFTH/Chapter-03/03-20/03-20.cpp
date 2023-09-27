#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    vector<int> vecInt;
    while (cin >> x)
    {
        vecInt.push_back(x);
    }

    for (vector<int>::size_type i = 0; i < vecInt.size() - 1; ++i)
    {
        cout << vecInt[i] + vecInt[i + 1] << endl;
    }
    cout << "改写后" << endl;
    for (vector<int>::size_type i = 0; i < vecInt.size() / 2; ++i)
    {
        cout << vecInt[i] + vecInt[vecInt.size() - 1 - i] << endl;
    }

    return 0;
}