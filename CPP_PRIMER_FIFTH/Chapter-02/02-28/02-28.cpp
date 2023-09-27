#include <iostream>

int main()
{
    // a
    // int i, *const cp;
    // i是int变量，尚未被初始化
    // cp是一个常量指针，指向对象尚未被初始化

    // b
    // int *p1, *const p2;
    // p1是指向int变量的指针，尚未被初始化
    // p2是一个常量指针，指向对象尚未被初始化

    // c
    // const int ic, &r = ic;
    // ic是一个int常量
    // r是ic的别名

    // d
    // const int *const p3;
    // p3是指向常量的常量指针，尚未被初始化

    // e
    // const int *p;
    // p是指向常量的指针，尚未被初始化

    return 0;
}