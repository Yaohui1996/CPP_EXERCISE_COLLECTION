#include <iostream>

int main()
{
    int i = 0;

    // double *dp = &i;//i是int型，不能用指向double的指针保存其地址
    // int *ip = i;//不能用int*变量保存int型值
    int *p = &i; // 合法

    return 0;
}