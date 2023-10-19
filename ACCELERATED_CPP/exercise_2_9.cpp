#include <iostream>
#include <string>

int main()
{
    // 返回较大的数
    double a = 0;
    double b = 0;
    std::cout << "请输入数值a: ";
    std::cin >> a;
    std::cout << "请输入数值b: ";
    std::cin >> b;
    if (a > b)
    {
        std::cout << "较大的数值是: " << a << std::endl;
    }
    else if (a < b)
    {
        std::cout << "较大的数值是: " << b << std::endl;
    }
    else
    {
        std::cout << "两个数一样大!" << b << std::endl;
    }
    return 0;
}