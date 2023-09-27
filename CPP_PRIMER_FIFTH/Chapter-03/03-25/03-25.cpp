#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> counter(11, 0);
    auto it = counter.begin();
    int x;
    while (cin >> x)
    {
        *(it + (x / 10)) += 1;
    }

    for (const int &item : counter)
    {
        cout << " " << item << "";
    }

    return 0;
}