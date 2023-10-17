#include <iostream>
#include <string>

int main()
{
    // 正方形
    int d1 = 0;
    std::cout << "请输入正方形的边长: ";
    std::cin >> d1;
    for (int r = 0; r != d1; ++r)
    {
        if (r == 0 || r == d1 - 1)
        {
            std::cout << std::string(d1, '*');
        }
        else
        {
            std::cout << "*";
            std::cout << std::string(d1 - 2, ' ');
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // 长方形

    // 三角形
    return 0;
}