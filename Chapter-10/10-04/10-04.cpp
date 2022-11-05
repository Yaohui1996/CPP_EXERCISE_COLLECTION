/**
 * @file 10-04.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.4：假定v是一个vector<double>，那么调用accumulate（v.cbegin（），v.cend（），0）有何错误（如果存在的话）？
// 解答：仍然可以求和。第三个参数0会被转换成double类型

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  vector<double> v = {1.0, 2.0, 3.0, 4.0, 5.0};
  cout << accumulate(v.cbegin(), v.cend(), 0) << endl;

  return 0;
}