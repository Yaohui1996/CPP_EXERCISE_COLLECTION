#include <iostream>

int main()
{

    // a
    // int i = -1, &r = 0;
    // 不合法，不能用0来初始化引用r

    // b
    // int *const p2 = &i2;
    // 合法，p2是指向变量i2的常量指针

    // c
    // const int i = -1, &r = 0;
    // 不合法，引用未初始化

    // d
    // const int *const p3 = &i2;
    // 合法，p3是指向常量i2的常量指针

    // e
    // const int *p1 = &i2;
    // 合法，p1是指向常量i2的普通指针

    // f
    // const int &const p3;
    // 不合法，语法错误，引用没有这样的用法

    // g
    const int *p;
    // 合法，声明了一个指向常量的普通指针p，暂时未初始化。

    return 0;
}