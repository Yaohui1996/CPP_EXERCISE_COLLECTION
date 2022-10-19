// 练习2.11：指出下面的语句是声明还是定义：
// (a) extern int ix = 1024;
// (b) int iy;
// (c) extern int iz;
// 在函数体内部，如果试图初始化一个由extern关键字标记的变量，将引发错误。

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
    // (a) extern int ix = 1024;
    std::cout << "(a) 在函数体内部, 如果试图初始化一个由extern关键字标记的变量, 将引发错误. " << std::endl;
}

void b() {
    // (b) int iy;
    int iy;
    std::cout << "(b) 合法. " << std::endl;
}

void c() {
    // (c) extern int iz;
    extern int iz;
    std::cout << "(c) 合法. " << std::endl;
}