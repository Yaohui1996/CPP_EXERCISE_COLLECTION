//
// Created by Yaohui Li on 2021/2/21.
//

#include <iostream>
#include <vector>

using namespace std;

bool findVal(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
    while (begin != end)
    {
        if (*begin == val)
            return true;
        ++begin;
    }
    return false;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 7, 8, 9};
    cout << findVal(v.cbegin(), v.cend(), 5) << endl;
    cout << findVal(v.cbegin(), v.cend(), 6) << endl;

    return 0;
}