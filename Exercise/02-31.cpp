// 练习2.31：假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现。
// r1 = v2;
// p1 = p2; p2 = p1;
// p1 = p3; p2 = p3;

#include <iostream>

int main() {
  // 练习2.30
  int i = 100;
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;
  // 练习2.31
  r1 = v2;
  std::cout << "r1 = v2;" << std::endl;
  std::cout << "合法, 因为v2是const, r1不是const" << std::endl;
  // p1 = p2;
  std::cout << "p1 = p2;" << std::endl;
  std::cout << "不合法, 因为p2指向一个const, p1指向的对象不是const, 不能把p2指向的对象的地址赋值给p1" << std::endl;
  std::cout << "编译器抛出: error: invalid conversion from 'const int*' to 'int*' [-fpermissive]" << std::endl;
  p2 = p1;
  std::cout << "p2 = p1;" << std::endl;
  std::cout << "合法, 因为p2认为自己指向一个const, 改为p1指向的对象v1的地址后, 对v1没有副作用" << std::endl;
  // p1 = p3;
  std::cout << "p1 = p3;" << std::endl;
  std::cout << "不合法, 因为p3指向一个const, p1指向的对象不是const, 不能把p3指向的对象的地址赋值给p1" << std::endl;
  std::cout << "编译器抛出: error: invalid conversion from 'const int*' to 'int*' [-fpermissive]" << std::endl;
  p2 = p3;
  std::cout << "p2 = p3;" << std::endl;
  std::cout << "合法, 因为p2认为自己指向一个const, p3也认为自己指向一个const, 且p2不是常量指针, 允许自身的内容被修改"
            << std::endl;
  return 0;
}