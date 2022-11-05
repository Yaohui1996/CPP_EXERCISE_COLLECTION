//
// Created by Yaohui Li on 2022/2/9.
//

// 练习10.12：编写名为compareIsbn的函数，比较两个Sales_data对象的isbn（）成员。
// 使用这个函数排序一个保存Sales_data对象的vector。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "Sales_data.h"

using namespace yaohui;
using namespace std;

bool compareIsbn(const Sales_data &data1, const Sales_data &data2) {
  return data1.isbn() < data2.isbn();
}

int main() {
  vector<Sales_data> v = {Sales_data("D", 2, 12.2), Sales_data("B", 1, 2.8),
                          Sales_data("A", 4, 18.7), Sales_data("C", 3, 5.3)};
  sort(v.begin(), v.end(), compareIsbn);

  for (const auto &item : v) {
    print(item, cout) << endl;
  }

  return 0;
}
