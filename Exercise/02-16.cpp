// 练习2.16：考查下面的所有赋值然后回答：哪些赋值是不合法的？为什么？哪些赋值是合法的？它们执行了什么样的操作？
// int i = 0, &r1 = i;
// double d = 0, &r2 = d;
// (a) r2 = 3.14159;
// (b) r2 = r1;
// (c) i = r2;
// (d) r1 = d;

#include <iostream>

int main() {
  // (a) r2 = 3.14159;
  std::cout << "(a) r2 = 3.14159;" << std::endl;
  std::cout << "合法" << std::endl;
  int i = 0, &r1 = i;
  double d = 0, &r2 = d;
  std::cout << "赋值前: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  r2 = 3.14159;
  std::cout << "赋值后: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  // (b) r2 = r1;
  std::cout << "(b) r2 = r1;" << std::endl;
  std::cout << "合法, 但发生类型转换 int -> double" << std::endl;
  std::cout << "赋值前: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  r2 = r1;
  std::cout << "赋值后: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  // (c) i = r2;
  std::cout << "(c) i = r2;" << std::endl;
  std::cout << "合法, 但发生类型转换 double -> int" << std::endl;
  std::cout << "赋值前: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  i = r2;
  std::cout << "赋值后: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  // (d) r1 = d;
  std::cout << "(d) r1 = d;" << std::endl;
  std::cout << "合法, 但发生类型转换 double -> int" << std::endl;
  std::cout << "赋值前: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  r1 = d;
  std::cout << "赋值后: [i=" << i << "] [r1=" << r1 << "] [d=" << d
            << "] [r2=" << r2 << "]" << std::endl;
  return 0;
}
