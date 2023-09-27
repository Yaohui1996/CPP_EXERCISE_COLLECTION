//
// Created by yaohui on 2022/5/3.
//

// 练习10.24：给定一个string，使用bind和check_size在一个int的vector中查找第一个大于string长度的值。

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

int main()
{
    vector<int> v = {1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string s = "haha";
    auto finder = std::find_if_not(v.begin(), v.end(), std::bind(check_size, s, std::placeholders::_1));
    std::cout << *finder << std::endl;

    return 0;
}