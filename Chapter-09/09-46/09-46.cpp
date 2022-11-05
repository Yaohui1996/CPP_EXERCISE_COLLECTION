/**
 * @file 09-46.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-21
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.46：重写上一题的函数，这次使用位置和长度来管理string，并只使用insert。

#include <iostream>
#include <string>

using namespace std;

string func(string name, string front, string back) {
  name.insert(0, front);
  name.insert(name.size(), back);
  return name;
}

int main() {
  string name = "Jack";
  cout << name << endl;
  name = func(name, "Mr.", "III");
  cout << name << endl;
  return 0;
}