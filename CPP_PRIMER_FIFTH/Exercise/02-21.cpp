// 练习2.21：请解释下述定义。在这些定义中有非法的吗？如果有，为什么？
// int i = 0;
// (a) double *dp = &i;
// (b) int *ip = i;
// (c) int *p = &i;

#include <iostream>

int main() {
  std::cout << "(a) double *dp = &i;" << std::endl;
  std::cout << "i是int型，不能用指向double的指针保存其地址" << std::endl;
  std::cout << "(b) int *ip = i;" << std::endl;
  std::cout << "不能用int*变量保存int型值" << std::endl;
  std::cout << "(c) int *p = &i;" << std::endl;
  std::cout << "合法" << std::endl;
  int i = 0;
  // double *dp = &i;//i是int型，不能用指向double的指针保存其地址
  // int *ip = i;//不能用int*变量保存int型值
  int *p = &i; // 合法
  return 0;
}