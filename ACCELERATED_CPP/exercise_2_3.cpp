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

    const int32_t left = 2;
    const int32_t right = 3;
    const int32_t top = 1;
    const int32_t bottom = 0;
    const int32_t rows = top + bottom + 3;

    std::cout << std::endl;

    for (int32_t r = 0; r != rows; ++r)
    {
        const std::string::size_type cols = greeting.size() + left + right + 2;
        std::string::size_type c = 0;
        while (c != cols)
        {
            if (r == top + 1 && c == left + 1)
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