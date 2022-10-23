// 练习2.30：对于下面的这些语句，请说明对象被声明成了顶层const还是底层const？
// const int v2 = 0;
// int v1 = v2;
// int *p1 = &v1, &r1 = v1;
// const int *p2 = &v2, *const p3 = &i, &r2 = v2;

#include <iostream>

int main() {
  int i = 100;
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;
  std::cout << "顶层const(top-level-const)的定义: " << std::endl;
  std::cout << "指针本身是个常量" << std::endl;
  std::cout << "底层const(low-level-const)的定义: " << std::endl;
  std::cout << "指针所指的对象是个常量" << std::endl;
  std::cout << "v2 被声明成了顶层const" << std::endl;
  std::cout << "p2 被声明成了底层const, 因为其所指对象是一个常量" << std::endl;
  std::cout << "p3 既是底层const, 因为其所指对象是一个常量, 也是顶层const, 因为其本身也是一个常量" << std::endl;
  return 0;
}