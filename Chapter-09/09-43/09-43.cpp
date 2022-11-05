/**
 * @file 09-43.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.43：编写一个函数，接受三个string参数s、oldVal和newVal。
// 使用迭代器及insert和erase函数将s中所有oldVal替换为newVal。
// 测试你的程序，用它替换通用的简写形式，
// 如，将"tho"替换为"though"，将"thru"替换为"through"。

#include <iostream>
#include <string>

using namespace std;

string yh_replace(string s, string oldVal, string newVal) {
  auto iter = s.begin();
  while (iter != s.end()) {
    if (*iter == oldVal.front()) { // 若第一个字符能匹配上
      bool can_match = true;
      auto p1 = iter;
      auto p2 = oldVal.begin();
      while (p1 != s.end() && p2 != oldVal.end()) {
        if (*p1 != *p2) {
          can_match = false;
          break;
        }
        ++p1;
        ++p2;
      }

      if (can_match) { // 若每个字符都能匹配上
        // 字符串替换
        iter = s.erase(iter, iter + oldVal.size());
        iter = s.insert(iter, newVal.begin(), newVal.end());
        iter = iter + newVal.size();
      } else {
        ++iter;
      }

    } else {
      ++iter;
    }
  }
  return s;
}

int main() {
  string s = "hello tho tho thru tho hhhh";
  cout << s << endl;
  s = yh_replace(s, "tho", "though");
  s = yh_replace(s, "thru", "through");
  cout << s << endl;
}
