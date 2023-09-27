//
// Created by yaohui on 2022/5/3.
//

// 练习10.25：在10.3.2节（第349页）的练习中，编写了一个使用partition的biggies版本。
// 使用check_size和bind重写此函数。

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

void biggies(vector<string> &v, string::size_type sz)
{
    auto p = partition(v.begin(), v.end(), std::bind(check_size, std::placeholders::_1, sz));

    // print out
    std::for_each(v.begin(), p, [](const string &s) -> void { cout << s << " "; });
}

int main()
{
    vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(v, 5);
    return 0;
}
