// 练习2.7：下述字面值表示何种含义？它们各自的数据类型是什么？
// (a) "Who goes with F\145rgus?\012"
// (b) 3.14e1L
// (c) 1024L
// (d) 3.14L

#include <iostream>

void a();

void b();

void c();

void d();

int main() {
  a();
  b();
  c();
  d();
  return 0;
}

void a() {
  // (a) "Who goes with F\145rgus?\012"
  constexpr const auto a = "Who goes with F\145rgus?\012";  // char*
  std::cout << a << std::endl;
  std::cout << "typeid(a).name()" << typeid(a).name() << std::endl;
}

void b() {
  // (b) 3.14e1L
  constexpr const auto b = 3.14e1L;  // long double
  std::cout << b << std::endl;
  std::cout << "typeid(b).name()=" << typeid(b).name() << std::endl;
}

void c() {
  // (c) 1024L
  constexpr const auto c = 1024L;  // long
  std::cout << c << std::endl;
  std::cout << "typeid(c).name()=" << typeid(c).name() << std::endl;
}

void d() {
  // (d) 3.14L
  constexpr const auto d = 3.14L;  // long double
  std::cout << d << std::endl;
  std::cout << "typeid(d).name()=" << typeid(d).name() << std::endl;
}