#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::fstream in_file("url.txt", std::ios::in);
    std::stringstream iss;
    std::string line;
    while (std::getline(in_file, line))
    {
        std::cout << line << std::endl;
        iss << (char)(std::stoi(line));
    }
    in_file.close();
    std::cout << iss.str() << std::endl;
    return 0;
}