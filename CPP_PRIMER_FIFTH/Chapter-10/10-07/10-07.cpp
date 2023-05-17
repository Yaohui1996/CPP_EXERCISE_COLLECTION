/**
 * @file 10-07.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.7：下面程序是否有错误？如果有，请改正。

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  // 1
  // 不合法
  vector<int> vec;
  list<int> lst;
  int i;
  while (cin >> i) {
    lst.push_back(i);
  }

  // 此处不合法
  // copy(lst.cbegin(), lst.cend(), vec.begin());

  // 改为以下语句则合法
  vec.resize(lst.size());
  copy(lst.cbegin(), lst.cend(), vec.begin());
  // 以下也合法
  // copy(lst.cbegin(),lst.cend(),back_inserter(vec));

  // print
  for (const auto &i : vec) {
    cout << i << " ";
  }
  cout << endl;
  for (const auto &i : lst) {
    cout << i << " ";
  }
  cout << endl;

  // 2
  // 不合法
  vector<int> vec2;
  vec2.reserve(10);

  // 此处不合法
  // fill_n(vec2.begin(), 10, 0);

  // 这样做才合法
  fill_n(back_inserter(vec2), 10, 0);
  for (const auto &i : vec2) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}