/**
 * @file 09-47.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-21
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.47：编写程序，首先查找string
// "ab2c3d7R4E6"中的每个数字字符，然后查找其中每个字母字符。
// 编写两个版本的程序，第一个要使用find_first_of，第二个要使用find_first_not_of。

#include <iostream>
#include <string>

using namespace std;

void func1(string s) {
  const string num_target = "0123456789";
  const string letter_target =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  string::size_type i = 0;
  while ((i = s.find_first_of(num_target, i)) != string::npos) {
    cout << "位置为: " << i << " 字符为: " << s[i] << endl;
    ++i;
  }

  i = 0;
  while ((i = s.find_first_of(letter_target, i)) != string::npos) {
    cout << "位置为: " << i << " 字符为: " << s[i] << endl;
    ++i;
  }
}

void func2(string s) {
  const string num_target = "0123456789";
  const string letter_target =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  string::size_type i = 0;
  while ((i = s.find_first_not_of(letter_target, i)) != string::npos) {
    cout << "位置为: " << i << " 字符为: " << s[i] << endl;
    ++i;
  }

  i = 0;
  while ((i = s.find_first_not_of(num_target, i)) != string::npos) {
    cout << "位置为: " << i << " 字符为: " << s[i] << endl;
    ++i;
  }
}

int main() {
  const string testcase = "ab2c3d7R4E6";
  func1(testcase);
  func2(testcase);

  return 0;
}
