/**
 * @file 10-02.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.2：重做上一题，但读取string序列存入list中。

#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> li = {"hello", "hello", "hello", "hello", "haha", "haha", "xixi", "hehe"};
    cout << std::count(li.cbegin(), li.cend(), "hello") << endl;
    cout << std::count(li.cbegin(), li.cend(), "haha") << endl;

    return 0;
}