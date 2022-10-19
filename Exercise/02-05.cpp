// 练习2.5：指出下述字面值的数据类型并说明每一组内几种字面值的区别：
// (a) 'a', L'a', "a", L"a"
// (b) 10, 10u, 10L, 10uL, 012, 0xC
// (c) 3.14, 3.14f, 3.14L
// (d) 10, 10u, 10., 10e-2

#include <iostream>
#include <typeinfo>

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
    // (a)
    constexpr const auto a1 = 'a';   // char
    constexpr const auto a2 = L'a';  // wchar_t
    constexpr const auto a3 = "a";   // char*
    constexpr const auto a4 = L"a";  // wchar_t*
    std::cout << "typeid(a1).name()=" << typeid(a1).name() << std::endl;
    std::cout << "typeid(a2).name()=" << typeid(a2).name() << std::endl;
    std::cout << "typeid(a3).name()=" << typeid(a3).name() << std::endl;
    std::cout << "typeid(a4).name()=" << typeid(a4).name() << std::endl;
}

void b() {
    // (b)
    constexpr const auto b1 = 10;    // int
    constexpr const auto b2 = 10u;   // unsigned int
    constexpr const auto b3 = 10L;   // long
    constexpr const auto b4 = 10uL;  // unsigned long
    constexpr const auto b5 = 012;   // int
    constexpr const auto b6 = 0xC;   // int
    std::cout << "typeid(b1).name()=" << typeid(b1).name() << std::endl;
    std::cout << "typeid(b2).name()=" << typeid(b2).name() << std::endl;
    std::cout << "typeid(b3).name()=" << typeid(b3).name() << std::endl;
    std::cout << "typeid(b4).name()=" << typeid(b4).name() << std::endl;
    std::cout << "typeid(b5).name()=" << typeid(b5).name() << std::endl;
    std::cout << "typeid(b6).name()=" << typeid(b6).name() << std::endl;
}

void c() {
    // (c)
    constexpr const auto c1 = 3.14;   // double
    constexpr const auto c2 = 3.14f;  // float
    constexpr const auto c3 = 3.14L;  // long double
    std::cout << "typeid(c1).name()=" << typeid(c1).name() << std::endl;
    std::cout << "typeid(c2).name()=" << typeid(c2).name() << std::endl;
    std::cout << "typeid(c3).name()=" << typeid(c3).name() << std::endl;
}

void d() {
    // (d)
    constexpr const auto d1 = 10;     // int
    constexpr const auto d2 = 10u;    // unsigned int
    constexpr const auto d3 = 10.;    // double
    constexpr const auto d4 = 10e-2;  // double
    std::cout << "typeid(d1).name()=" << typeid(d1).name() << std::endl;
    std::cout << "typeid(d2).name()=" << typeid(d2).name() << std::endl;
    std::cout << "typeid(d3).name()=" << typeid(d3).name() << std::endl;
    std::cout << "typeid(d4).name()=" << typeid(d4).name() << std::endl;
}
