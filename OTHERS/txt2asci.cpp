#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string s = "";
    std::stringstream ss;
    for (const char ch : s)
    {
        ss << (int)ch << std::endl;
    }
    std::cout << ss.str();
    std::fstream of("url.txt", std::ios::out);
    of << ss.str();
    of.close();
    return 0;
}