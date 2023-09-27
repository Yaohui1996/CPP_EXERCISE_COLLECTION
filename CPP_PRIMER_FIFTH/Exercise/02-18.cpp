// 练习2.18：编写代码分别更改指针的值以及指针所指对象的值。

#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int *pa = &a;
    int *pb = &b;
    std::cout << "初始化: " << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "*pa=" << *pa << std::endl;
    std::cout << "*pb=" << *pb << std::endl;
    *pa = 100;
    std::cout << "通过指针pa修改a的值后: " << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "*pa=" << *pa << std::endl;
    std::cout << "*pb=" << *pb << std::endl;
    pa = &b;
    std::cout << "更改指针pa的值后: " << std::endl;
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "*pa=" << *pa << std::endl;
    std::cout << "*pb=" << *pb << std::endl;
    return 0;
}