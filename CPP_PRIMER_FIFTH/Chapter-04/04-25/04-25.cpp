#include <iostream>

int main()
{
    char a = 'q';
    int b;
    b = ~a << 6;
    std::cout << b << std::endl;
    return 0;
}