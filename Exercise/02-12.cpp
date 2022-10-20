// 练习2.12：请指出下面的名字中哪些是非法的？
// (a) int double = 3.14;
// (b) int _;
// (c) int catch-22;
// (d) int 1_or_2 = 1;
// (e) double Double = 3.14;

#include <iostream>

void a();
void b();
void c();
void d();
void e();

int main() {
    a();
    b();
    c();
    d();
    e();
    return 0;
}

void a() {
    // (a) int double = 3.14;
    std::cout << "(a) int double = 3.14;" << std::endl;
    std::cout << "是非法的, 因为double是关键字. " << std::endl;
}
void b() {
    // (b) int _;
    int _;
    std::cout << "(b) int _;" << std::endl;
    std::cout << "是合法的. " << std::endl;
}
void c() {
    // (c) int catch-22;
    std::cout << "(c) int catch-22;" << std::endl;
    std::cout << "是非法的, 因为-是运算符. " << std::endl;
}
void d() {
    // (d) int 1_or_2 = 1;
    std::cout << "(d) int 1_or_2 = 1;" << std::endl;
    std::cout << "是非法的, 因为变量名不能以数字开头. " << std::endl;
}
void e() {
    // (e) double Double = 3.14;
    std::cout << "(e) double Double = 3.14;" << std::endl;
    std::cout << "是合法的. " << std::endl;
}