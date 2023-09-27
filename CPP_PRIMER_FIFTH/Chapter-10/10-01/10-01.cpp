/**
 * @file 10-01.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.1：头文件algorithm中定义了一个名为count的函数，
// 它类似find，接受一对迭代器和一个值作为参数。
// count返回给定值在序列中出现的次数。
// 编写程序，读取int序列存入vector中，打印有多少个元素的值等于给定值。

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 1, 1, 1, 1, 2, 3, 4, 5, 6};
    cout << std::count(v.cbegin(), v.cend(), 1) << endl;
    cout << std::count(v.cbegin(), v.cend(), 5) << endl;

    return 0;
}