// 练习2.28：说明下面的这些定义是什么意思，挑出其中不合法的。
// (a) int i, *const cp;
// (b) int *p1, *const p2;
// (c) const int ic, &r = ic;
// (d) const int *const p3;
// (e) const int *p;

#include <iostream>

int main()
{
    // (a) int i, *const cp;
    std::cout << "(a) int i, *const cp;" << std::endl;
    std::cout << "不合法, 未初始化const指针cp" << std::endl;
    std::cout << "编译器抛出: error: uninitialized 'const cp' [-fpermissive]" << std::endl;
    // (b) int *p1, *const p2;
    std::cout << "(b) int *p1, *const p2;" << std::endl;
    std::cout << "不合法, 未初始化const指针p2" << std::endl;
    std::cout << "编译器抛出: error: uninitialized 'const cp' [-fpermissive]" << std::endl;
    // (c) const int ic, &r = ic;
    std::cout << "(c) const int ic, &r = ic;" << std::endl;
    std::cout << "不合法, 未初始化const变量ic" << std::endl;
    std::cout << "编译器抛出: error: uninitialized 'const ic' [-fpermissive]" << std::endl;
    // (d) const int *const p3;
    std::cout << "(d) const int *const p3;" << std::endl;
    std::cout << "不合法, 未初始化const指针p3" << std::endl;
    std::cout << "编译器抛出: error: uninitialized 'const p3' [-fpermissive]" << std::endl;
    // (e) const int *p;
    const int *p;
    std::cout << "(e) const int *p;" << std::endl;
    std::cout << "合法, p是指向常量的指针, 但尚未初始化" << std::endl;
    return 0;
}