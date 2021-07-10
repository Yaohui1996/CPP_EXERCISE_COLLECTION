#include <iostream>
#include <string>

using std::string;

int main()
{
    //a
    string a = "Who goes with F\145rgus?\012";
    std::cout << a << std::endl;

    //b
    long double b = 3.14e1L;
    std::cout << b << std::endl;

    //c
    //float c = 1024f; //错误语法
    float c = 1024.0f;
    std::cout << c << std::endl;

    //d
    long double d = 3.14L;
    std::cout << d << std::endl;
    return 0;
}