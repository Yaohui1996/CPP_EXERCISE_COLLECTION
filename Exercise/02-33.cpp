// 练习2.33：利用本节定义的变量，判断下列语句的运行结果。
// a = 42; b = 42; c = 42;
// d = 42; e = 42; f = 42;
// g = 42;
#include <iostream>
int main() {
  int i = 0, &r = i;          //i是int型变量，r是i的别名
  auto a = r;                 //a是int型变量
  const int ci = i, &cr = ci; //ci是int型常量，cr是ci的别名
  auto b = ci;                //b是int型变量
  auto c = cr;                //c是int型变量
  auto d = &i;                //d是指向int型变量的普通指针
  auto e = &ci;               //e是指向int型常量的普通指针
  const auto f = ci;          //f是int型常量
  auto &g = ci;               //g是ci的别名，是对int型常量的引用
  const auto &j = 42;         //j是对整数的常量引用

  std::cout << "a = 42;" << std::endl;
  std::cout << "赋值前: a=" << a << std::endl;
  a = 42;
  std::cout << "赋值后: a=" << a << std::endl;

  std::cout << "b = 42;" << std::endl;
  std::cout << "赋值前: b=" << b << std::endl;
  b = 42;
  std::cout << "赋值后: b=" << b << std::endl;

  std::cout << "c = 42;" << std::endl;
  std::cout << "赋值前: c=" << c << std::endl;
  c = 42;
  std::cout << "赋值后: c=" << c << std::endl;

  std::cout << "d = 42;" << std::endl;
  std::cout << "赋值前: d=" << d << std::endl;
  // d = 42;
  std::cout << "d是int*, 不能被赋值为42" << std::endl;

  std::cout << "e = 42;" << std::endl;
  std::cout << "赋值前: e=" << e << std::endl;
  // e = 42;
  std::cout << "e是指向int型常量的普通指针, 不能被赋值为42" << std::endl;

  std::cout << "f = 42;" << std::endl;
  std::cout << "赋值前: f=" << f << std::endl;
  // f = 42;
  std::cout << "f是int型常量, 不能被赋值" << std::endl;

  std::cout << "g = 42;" << std::endl;
  std::cout << "赋值前: g=" << g << std::endl;
  // g = 42;
  std::cout << "g是int型常量, 不能被赋值" << std::endl;
  /*
   * 结果：
   * a a = 0    a = 42
   * b b = 0    b = 42 //auto会忽略顶层const
   * c c = 0    c = 42
   * d d 指向i          //出错，不能给指针赋值42
   * e e 指向ci         //出错，不能给指针赋值42
   * g g = 0           //出错，不能给常量赋值
   */
  return 0;
}