// 练习2.29：假设已有上一个练习中定义的那些变量，则下面的哪些语句是合法的？请说明原因。
// (a) i = ic;
// (b) p1 = p3;
// (c) p1 = &ic;
// (c) p3 = &ic;
// (e) p2 = p1;
// (f) ic = *p3;

#include <iostream>

int main() {
  // (a) i = ic;
  std::cout << "(a) i = ic;" << std::endl;
  std::cout << "合法, ic是const int, i是int" << std::endl;
  // (b) p1 = p3;
  std::cout << "(b) p1 = p3;" << std::endl;
  std::cout << "不合法, p3是指向常量的常量指针, p1是指向int的指针" << std::endl;
  // int a = 100;
  // int *p1 = &a;
  // int b = 200;
  // const int *const p3 = &b;
  // p1 = p3;
  std::cout << "编译器抛出: error: invalid conversion from 'const int*' to "
               "'int*' [-fpermissive]"
            << std::endl;
  // (c) p1 = &ic;
  std::cout << "(c) p1 = &ic;" << std::endl;
  std::cout << "不合法, p1是指向int的指针, ic是const int" << std::endl;
  // int a = 100;
  // int *p1 = &a;
  // const int ic = 200;
  // p1 = &ic;
  std::cout << "编译器抛出: error: invalid conversion from 'const int*' to "
               "'int*' [-fpermissive]"
            << std::endl;
  // (c) p3 = &ic;
  std::cout << "(c) p3 = &ic;" << std::endl;
  std::cout
      << "不合法, p3是指向常量的常量指针, 不能对p3的内容(储存的地址)进行修改"
      << std::endl;
  // const int ic = 100;
  // int b = 200;
  // const int *const p3 = &b;
  // p3 = &ic;
  std::cout << "编译器抛出: error: assignment of read-only variable 'p3'"
            << std::endl;
  // (e) p2 = p1;
  std::cout << "(e) p2 = p1;" << std::endl;
  std::cout << "不合法, p2是常量指针, 不能对p2的内容(储存的地址)进行修改"
            << std::endl;
  // int a = 100;
  // int *p1, *const p2 = &a;
  // p2 = p1;
  std::cout << "编译器抛出: error: assignment of read-only variable 'p2'"
            << std::endl;
  // (f) ic = *p3;
  std::cout << "(f) ic = *p3;" << std::endl;
  std::cout << "不合法, ic是const" << std::endl;
  // const int ic = 100;
  // int a = 200;
  // const int *const p3 = &a;
  // ic = *p3;
  std::cout << "编译器抛出: error: assignment of read-only variable 'ic'"
            << std::endl;
  return 0;
}