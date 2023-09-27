#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x;
    vector<int> vInt;
    while (cin >> x)
    {
        vInt.push_back(x);
    }
    for (const int &item : vInt)
    {
        cout << item << endl;
    }
    return 0;
}