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
    int l1 = 0;
    int l2 = 0;
    std::cout << "请输入长方形的长: ";
    std::cin >> l1;
    std::cout << "请输入长方形的宽: ";
    std::cin >> l2;
    for (int r = 0; r != l2; ++r)
    {
        if (r == 0 || r == l2 - 1)
        {
            std::cout << std::string(l1, '*');
        }
        else
        {
            std::cout << "*";
            std::cout << std::string(l1 - 2, ' ');
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // 三角形
    int h = 0;
    std::cout << "请输入三角形的直角边长: ";
    std::cin >> h;
    for (int r = 0; r != h; ++r)
    {
        if (r == 0)
        {
            std::cout << "*";
        }
        else if (r == h - 1)
        {
            std::cout << std::string(r + 2, '*');
        }
        else
        {
            std::cout << "*";
            std::cout << std::string(r, ' ');
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}