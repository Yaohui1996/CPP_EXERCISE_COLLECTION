#include <iostream>

int main() {

    int i = 42;//声明整型变量i，赋值为42
    std::cout << i << std::endl;

    int *p1 = &i;//声明指针p1，保存变量i的地址
    std::cout << p1 << std::endl;

    *p1 = *p1 * *p1;//计算i的平方
    std::cout << p1 << std::endl;//通过输出可知地址未发生改变

    std::cout << i << std::endl;

    return 0;
}