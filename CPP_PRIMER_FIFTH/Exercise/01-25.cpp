// 练习1.25：借助网站上的Sales_item.h头文件，编译并运行本节给出的书店程序。

#include "Sales_item.h"
#include <iostream>

int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}

// input:
// book1: 0-201-78345-x 3 20.00
// book2: 0-201-78345-x 2 25.00
// book3: 0-201-78345-y 10 30.00
// book4: 0-201-78345-y 1 10.00
