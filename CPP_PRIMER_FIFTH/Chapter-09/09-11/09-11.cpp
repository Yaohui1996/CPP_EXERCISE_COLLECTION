//
// Created by Yaohui Li on 2021/2/21.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3{1, 2, 3};
    vector<int> v4(v3);
    vector<int> v5 = {5, 6, 7};
    vector<int> v6 = v3;
    vector<int> v7(v5.begin(), v5.begin() + 2);
}