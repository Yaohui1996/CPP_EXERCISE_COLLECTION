// 练习1.16：编写程序，从cin读取一组数，输出其和。

#include <iostream>

int main()
{
    double read_num = 0.0;
    double sum = 0.0;
    while (std::cin >> read_num)
    {
        sum += read_num;
    }
    std::cout << sum << std::endl;
    return 0;
}