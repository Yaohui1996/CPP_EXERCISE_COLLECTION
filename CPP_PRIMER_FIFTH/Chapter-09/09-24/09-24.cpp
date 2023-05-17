/**
 * @file 09-24.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.24：编写程序，分别使用at、下标运算符、front和begin提取一个vector中的第一个元素。在一个空vector上测试你的程序。

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  // cout << v.at(0) << endl; // libc++abi: terminating with uncaught exception
  // of type std::out_of_range: vector cout << v[0] << endl; // zsh:
  // segmentation fault cout << v.front() << endl; // zsh: segmentation fault
  // cout << v.back() << endl; // zsh: segmentation fault
  return 0;
}