/**
 * @file 09-42.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.42：假定你希望每次读取一个字符存入一个string中，而且知道最少需要读取100个字符，应该如何提高程序的性能？

// 解答：
// 提前reserve 100个字符的空间

#include <string>

using namespace std;

int main() {
    string s;
    s.reserve(100);
    return 0;
}