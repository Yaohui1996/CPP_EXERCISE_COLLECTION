// 练习2.25：说明下列变量的类型和值。
// (a) int *ip, i, &r = i;
// 解答:
// ip 指向int型变量的指针
// i int型变量
// r int型变量的引用
// (b) int i, *ip = 0;
// 解答:
// i int型变量
// ip 指向int型变量的指针, 且被赋值
// (c) int *ip, ip2;
// 解答:
// 指向int型变量的指针
// int型变量

#include <iostream>

void a();

void b();

void c();

int main() {
  a();
  b();
  c();
  return 0;
}

void a() {
  // (a) int *ip, i, &r = i;
  int *ip, i, &r = i;
  std::cout << "(a) int *ip, i, &r = i;" << std::endl;
  std::cout << "ip: [type=int*] [val=nullptr]" << std::endl;
  std::cout << "ip: [typeid(ip).name()=" << typeid(ip).name() << "] [ip=" << ip
            << "]" << std::endl;
  std::cout << "i: [type=int] [val=0]" << std::endl;
  std::cout << "i: [typeid(i).name()=" << typeid(i).name() << "] [i=" << i
            << "]" << std::endl;
  std::cout << "r: [type=int] [val=0]" << std::endl;
  std::cout << "r: [typeid(r).name()=" << typeid(r).name() << "] [r=" << r
            << "]" << std::endl;
}

void b() {
  // (b) int i, *ip = 0;
  int i, *ip = 0;
  std::cout << "(b) int i, *ip = 0;" << std::endl;
  std::cout << "i: [type=int] [val=0]" << std::endl;
  std::cout << "i: [typeid(i).name()=" << typeid(i).name() << "] [i=" << i
            << "]" << std::endl;
  std::cout << "ip: [type=int*] [val=nullptr]" << std::endl;
  std::cout << "ip: [typeid(ip).name()=" << typeid(ip).name() << "] [ip=" << ip
            << "]" << std::endl;
}

void c() {
  // (c) int *ip, ip2;
  int *ip, ip2;
  std::cout << "(c) int *ip, ip2;" << std::endl;
  std::cout << "ip: [type=int*] [val=nullptr]" << std::endl;
  std::cout << "ip: [typeid(ip).name()=" << typeid(ip).name() << "] [ip=" << ip
            << "]" << std::endl;
  std::cout << "ip2: [type=int] [val=0]" << std::endl;
  std::cout << "ip2: [typeid(ip2).name()=" << typeid(ip2).name()
            << "] [ip2=" << ip2 << "]" << std::endl;
}