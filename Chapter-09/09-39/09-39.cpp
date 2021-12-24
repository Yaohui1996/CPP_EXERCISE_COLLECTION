/**
 * @file 09-39.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.39：解释下面程序片段做了什么：
// vector<string> svec;
// svec.reserve(1024);
// string word;
// while (cin >> word)
//     svec.push_back(word);
// svec.resize(svec.size() + svec.size() / 2);

// 解答：
// 首先给svec分配了1024个元素的capacity
// 然后读取元素并添加到svec
// 循环结束后，将svec的元素数目扩充为1.5倍
// 新增的0.5倍元素为string的默认初始化值

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> svec;
    svec.reserve(1024);
    string word;
    while (cin >> word) svec.push_back(word);
    svec.resize(svec.size() + svec.size() / 2);
    cout << "hello";
    return 0;
}