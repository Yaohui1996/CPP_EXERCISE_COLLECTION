/**
 * @file 10-09.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.9：实现你自己的elimDups。
// 测试你的程序，分别在读取输入后、调用unique后以及调用erase后打印vector的内容。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void elimDups(vector<string> &vec)
{
    sort(vec.begin(), vec.end());
    auto end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
}

int main()
{
    vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    elimDups(vec);
    for (const auto &i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}