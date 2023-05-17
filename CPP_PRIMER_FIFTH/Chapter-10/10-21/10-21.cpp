//
// Created by yaohui on 2022/5/3.
//

// 练习10.21：编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0。
//  一旦变量变为0，再调用lambda应该不再递减变量。
//  lambda应该返回一个bool值，指出捕获的变量是否为0。

#include <iostream>

int main() {
  int a = 10;
  std::cout << a << std::endl;

  auto lam = [a]() mutable -> bool {
    if (a == 0) {
      return true;
    }
    while (a > 0) {
      --a;
    }
    return false;
  };

  std::cout << lam() << std::endl;
  std::cout << a << std::endl;

  return 0;
}