#include <iostream>

int main() {
    int a = 4;
    if (a % 2 == 0)
        std::cout << a << "是偶数" << std::endl;
    else
        std::cout << a << "是奇数" << std::endl;
    return 0;
}