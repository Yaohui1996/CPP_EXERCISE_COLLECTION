// 练习2.15：下面的哪个定义是不合法的？为什么？
// (a) int ival = 1.01;
// (b) int &rval1 = 1.01;
// (c) int &rval2 = ival;
// (d) int &rval3;

#include <iostream>

int main() {
  // (a) int ival = 1.01;
  int ival = 1.01;
  std::cout << "(a) int ival = 1.01;" << std::endl;
  std::cout << "合法" << std::endl;
  // (b) int &rval1 = 1.01;
  std::cout << "(b) int &rval1 = 1.01;" << std::endl;
  std::cout << "不合法" << std::endl;
  // (c) int &rval2 = ival;
  int &rval2 = ival;
  std::cout << "(c) int &rval2 = ival;" << std::endl;
  std::cout << "合法" << std::endl;
  // (d) int &rval3;
  std::cout << "(d) int &rval3;" << std::endl;
  std::cout << "不合法" << std::endl;
  return 0;
}
