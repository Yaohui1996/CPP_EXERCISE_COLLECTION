#include <iostream>

int main()
{
    /*
     * a
     * i = ic;
     * 合法
     *
     * b
     * p1 = p3;
     * 不合法
     *
     * c
     * p1 = &ic
     * 不合法
     *
     * d
     * p3 = &ic;
     * 不合法
     *
     * e
     * p2 = p1;
     * 不合法
     *
     * f
     * ic = *p3;
     * 不合法
     *
     *
     */
    return 0;
}