#include <iostream>

int main()
{
    const int v2 = 0;        // v2是顶层const
    int v1 = v2;             // v1 不是const
    int *p1 = &v1, &r1 = v1; // p1 不是const，r1是v1的别名
    // const int *p2 = &v2, *const p3 = &i, &r2 = v2;//p2 是底层const p3
    // 左边是底层const 右边是顶层const

    return 0;
}