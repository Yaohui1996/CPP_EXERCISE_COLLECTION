#include <cstdint>
#include <iostream>
#include <string>

int main()
{
    {
        const std::string s = "s11111111";
        std::cout << s << std::endl;
    }
    {
        const std::string s = "s222222222";
        std::cout << s << std::endl;
    }
    return 0;
}