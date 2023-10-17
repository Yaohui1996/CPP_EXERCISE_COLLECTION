#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name + "!";

    int32_t left = 0;
    int32_t right = 0;
    int32_t top = 0;
    int32_t bottom = 0;
    std::cout << "请输入上侧空白符数目: ";
    std::cin >> top;
    std::cout << "请输入下侧空白符数目: ";
    std::cin >> bottom;
    std::cout << "请输入左侧空白符数目: ";
    std::cin >> left;
    std::cout << "请输入右侧空白符数目: ";
    std::cin >> right;

    const int32_t rows = top + bottom + 3;

    std::cout << std::endl;

    for (int32_t r = 0; r != rows; ++r)
    {
        const std::string::size_type cols = greeting.size() + left + right + 2;
        std::string::size_type c = 0;
        if (r == 0 || r == rows - 1)
        {
            std::cout << std::string(cols, '*');
        }
        else if (r < top + 1 || r > rows - 2 - bottom)
        {
            std::cout << "*";
            std::cout << std::string(cols - 2, ' ');
            std::cout << "*";
        }
        else
        {
            std::cout << "*";
            std::cout << std::string(left, ' ');
            std::cout << greeting;
            std::cout << std::string(right, ' ');
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}