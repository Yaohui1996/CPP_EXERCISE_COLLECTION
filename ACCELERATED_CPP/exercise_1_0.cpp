#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    const uint32_t width = 20;
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;
    std::cout << std::string(width, '*') << std::endl;
    std::cout << "*" << std::string(width - 2, ' ') << "*" << std::endl;
    std::cout << "* Hello, " << name << "!" << std::string(width - 2 - 8 - name.size() - 2, ' ') << " *" << std::endl;
    std::cout << "*" << std::string(width - 2, ' ') << "*" << std::endl;
    std::cout << std::string(20, '*') << std::endl;
    return 0;
}