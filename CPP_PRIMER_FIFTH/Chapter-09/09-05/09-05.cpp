//
// Created by Yaohui Li on 2021/2/21.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int>::const_iterator findVal(vector<int>::const_iterator begin, vector<int>::const_iterator end, int val)
{
    while (begin != end)
    {
        if (*begin == val)
            return begin;
        ++begin;
    }
    return end;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 7, 8, 9};
    cout << *(findVal(v.begin(), v.end(), 5)) << endl;
    cout << *(findVal(v.begin(), v.end(), 6)) << endl;

    return 0;
}