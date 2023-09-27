//
// Created by yaohui on 2022/5/3.
//

// 练习10.22：重写统计长度小于等于6的单词数量的程序，使用函数代替lambda。

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool biggies_cnt_helper(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

size_t biggies_cnt(const vector<string> &v, string::size_type sz)
{
    return std::count_if(v.begin(), v.end(), std::bind(biggies_cnt_helper, std::placeholders::_1, sz));
}

int main()
{
    vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    std::cout << biggies_cnt(v, 5) << std::endl;

    return 0;
}