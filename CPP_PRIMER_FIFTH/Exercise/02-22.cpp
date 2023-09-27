// 练习2.22：假设p是一个int型指针，请说明下述代码的含义。
// if (p) // ...
// if (*p) // ...

#include <iostream>

int main()
{
    std::cout << "if (p) // ..." << std::endl;
    std::cout << "解答: 若p不是nullptr" << std::endl;
    std::cout << "if (*p) // ..." << std::endl;
    std::cout << "解答: 若*p不是0" << std::endl;
    std::cout << "例子: " << std::endl;
    int a = 100;
    int *pa = &a;
    int b = 0;
    int *pb = &b;
    int *pc = nullptr;
    std::cout << (pa ? "pa不是nullptr" : "pa是nullptr") << std::endl;
    std::cout << (pb ? "pb不是nullptr" : "pb是nullptr") << std::endl;
    std::cout << (pc ? "pc不是nullptr" : "pc是nullptr") << std::endl;
    std::cout << (*pa ? "*pa不为0" : "*pa等于0") << std::endl;
    std::cout << (*pb ? "*pb不为0" : "*pb等于0") << std::endl;
    return 0;
}