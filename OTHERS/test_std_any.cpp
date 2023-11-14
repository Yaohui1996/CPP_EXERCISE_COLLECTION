#include <any>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::any> v;
    v.push_back("hh");
    v.push_back(double{3.2});
    v.push_back(int{10});
    v.push_back('A');
    std::cout << "v[0](" << v[0].type().name() << "): " << std::any_cast<const char *>(v[0]) << std::endl;
    std::cout << "v[1](" << v[1].type().name() << "): " << std::any_cast<double>(v[1]) << std::endl;
    std::cout << "v[2](" << v[2].type().name() << "): " << std::any_cast<int>(v[2]) << std::endl;
    std::cout << "v[3](" << v[3].type().name() << "): " << std::any_cast<char>(v[3]) << std::endl;

    v[0] = "tttt";
    v[1] = 3.1415926;
    v[2] = 333;
    v[3] = 'z';
    std::cout << "v[0](" << v[0].type().name() << "): " << std::any_cast<const char *>(v[0]) << std::endl;
    std::cout << "v[1](" << v[1].type().name() << "): " << std::any_cast<double>(v[1]) << std::endl;
    std::cout << "v[2](" << v[2].type().name() << "): " << std::any_cast<int>(v[2]) << std::endl;
    std::cout << "v[3](" << v[3].type().name() << "): " << std::any_cast<char>(v[3]) << std::endl;
    return 0;
}