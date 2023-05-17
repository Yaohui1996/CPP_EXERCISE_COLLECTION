/**
 * @file 09-28.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.28：编写函数，接受一个forward_list<string>和两个string共三个参数。
// 函数应在链表中查找第一个string，并将第二个string插入到紧接着第一个string之后的位置。
// 若第一个string未在链表中，则将第二个string插入到链表末尾。

#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void func(forward_list<string> &fl, const string &s1, const string &s2);

int main() {
  forward_list<string> fl{"a", "bb", "ccc", "ddd"};
  func(fl, "ccc", "233");
  for (const auto &item : fl)
    cout << item << " ";
  cout << "\n";
  func(fl, "wqeasd", "12345");
  for (const auto &item : fl)
    cout << item << " ";

  return 0;
}

void func(forward_list<string> &fl, const string &s1, const string &s2) {
  forward_list<string>::const_iterator prev = fl.cbefore_begin();
  forward_list<string>::const_iterator curr = fl.cbegin();
  for (; curr != fl.cend(); ++prev, ++curr) {
    if (*curr == s1) {
      fl.insert_after(curr, s2);
      break;
    }
  }
  if (curr == fl.cend()) {
    fl.insert_after(prev, s2);
  }
}
