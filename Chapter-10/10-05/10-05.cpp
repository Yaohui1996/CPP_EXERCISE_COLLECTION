/**
 * @file 10-05.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.5：在本节对名册（roster）调用equal的例子中，如果两个名册中保存的都是C风格字符串而不是string，会发生什么？
// 解答： 不可以运行。只要两个名册中保存的元素类型互相可以用==比较即可，但const
// char* 不能用==比较。

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  vector<const char *> roster1 = {"hello", "world"};
  list<const char *> roster2 = {"hello", "world"};

  // 以下代码编译不通过

  // if (equal(roster1.cbegin(), roster1.cend(), roster2.cbegin(),
  //           roster2.cend())) {
  //     cout << "equal!" << endl;
  // } else {
  //     cout << "not equal!" << endl;
  // }

  return 0;
}
