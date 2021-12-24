/**
 * @file 09-41.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.41：编写程序，从一个vector<char>初始化一个string。

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<char> vec = {'h', 'e', 'l', 'l', 'o'};
    string s(vec.cbegin(), vec.cend());
    cout << s << "\n";

    return 0;
}