//
// Created by Yaohui Li on 2021/2/21.
//

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1{1, 2, 3};
    vector<int> v2{4, 5, 6};
    list<int> l1{1, 2, 3};

    if (v1.size() != l1.size())
    {
        cout << "不相等" << endl;
        return -1;
    }
    auto itv1 = v1.cbegin();
    auto itl1 = l1.cbegin();
    while (itv1 != v1.cend())
    {
        if (*itv1 != *itl1)
        {
            cout << "不相等" << endl;
            return -1;
        }
        ++itv1;
        ++itl1;
    }
    cout << "相等" << endl;
    return 0;
}