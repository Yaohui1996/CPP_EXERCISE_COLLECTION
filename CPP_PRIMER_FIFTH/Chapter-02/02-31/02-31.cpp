#include <iostream>

int main()
{
    const int v2 = 0;        // v2是顶层const
    int v1 = v2;             // v1 不是const
    int *p1 = &v1, &r1 = v1; // p1 不是const，r1是v1的别名
    // const int *p2 = &v2, *const p3 = &i, &r2 = v2;//p2 是底层const p3
    // 左边是底层const 右边是顶层const

    r1 = v2; // 合法
    // p1 = p2;//不合法，不能把指向常量的指针赋值给非const指针
    // p2 = p1;//合法
    // p1 = p3;//不合法，不能把指向常量的常量指针赋值给普通指针
    // p2 = p3;//合法，可以把指向常量的常量指针赋值给指向常量的普通指针

    return 0;
}