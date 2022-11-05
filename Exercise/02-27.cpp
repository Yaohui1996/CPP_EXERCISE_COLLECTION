// 练习2.27：下面的哪些初始化是合法的？请说明原因。
// (a) int i = -1, &r = 0;
// (b) int *const p2 = &i2;
// (c) const int i = -1, &r = 0;
// (d) const int *const p3 = &i2;
// (e) const int *p1 = &i2;
// (f) const int &const r2;
// (g) const int i2 = i, &r = i;

#include <iostream>

int main() {
  // (a) int i = -1, &r = 0;
  std::cout << "(a) int i = -1, &r = 0;" << std::endl;
  std::cout << "不合法，不能用0来初始化引用r" << std::endl;
  // (b) int *const p2 = &i2;
  std::cout << "(b) int *const p2 = &i2;" << std::endl;
  std::cout << "合法，p2是指向变量i2的常量指针" << std::endl;
  // (c) const int i = -1, &r = 0;
  std::cout << "(c) const int i = -1, &r = 0;" << std::endl;
  std::cout << "不合法，引用未初始化" << std::endl;
  // (d) const int *const p3 = &i2;
  std::cout << "(d) const int *const p3 = &i2;" << std::endl;
  std::cout << "合法，p3是指向常量i2的常量指针" << std::endl;
  // (e) const int *p1 = &i2;
  std::cout << "(e) const int *p1 = &i2;" << std::endl;
  std::cout << "合法，p1是指向常量i2的普通指针" << std::endl;
  // (f) const int &const r2;
  std::cout << "(f) const int &const r2;" << std::endl;
  std::cout << "不合法，语法错误，引用没有这样的用法" << std::endl;
  // (g) const int i2 = i, &r = i;
  std::cout << "(g) const int i2 = i, &r = i;" << std::endl;
  std::cout << "合法，声明了一个指向常量的普通指针p，暂时未初始化。"
            << std::endl;
  return 0;
}