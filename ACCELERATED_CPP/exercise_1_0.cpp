#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    uint32_t width = 20;
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    if (name.size() + 12 > width)
    {
        width = name.size() + 12;
    }
    std::cout << std::string(width, '*') << std::endl;
    std::cout << "*" << std::string(width - 2, ' ') << "*" << std::endl;
    std::cout << "* Hello, " << name << "!" << std::string(width - 12 - name.size(), ' ') << " *" << std::endl;
    std::cout << "*" << std::string(width - 2, ' ') << "*" << std::endl;
    std::cout << std::string(width, '*') << std::endl;
    return 0;
}