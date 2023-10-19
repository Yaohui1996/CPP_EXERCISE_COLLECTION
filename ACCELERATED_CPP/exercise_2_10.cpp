#include <iostream>
#include <string>

int main()
{
    // 对std::的每一次使用进行解释
    int k = 0;
    while (k != 10)
    {
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl;
    return 0;
}