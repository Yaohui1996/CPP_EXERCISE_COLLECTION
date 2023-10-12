#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    const std::string greeting = "Hello, " + name + "!";
    // std::cout << "Hello, " << name << "!" << std::endl;

    const int32_t pad = 0;
    const int32_t rows = pad * 2 + 3;

    std::cout << std::endl;

    for (int32_t r = 0; r != rows; ++r)
    {
        const std::string::size_type cols = greeting.size() + pad * 2 + 2;
        std::string::size_type c = 0;
        while (c != cols)
        {
            if (r == pad + 1 && c == pad + 1)
            {
                std::cout << greeting;
                c += greeting.size();
            }
            else
            {
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    std::cout << "*";
                else
                    std::cout << " ";
                ++c;
            }
        }
        std::cout << std::endl;
    }
    return 0;
}