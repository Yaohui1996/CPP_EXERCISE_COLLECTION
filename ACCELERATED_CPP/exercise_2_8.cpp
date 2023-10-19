#include <iostream>
#include <string>

int main()
{
    // 计算区间[1,10)所有数字的乘积
    int result = 1;
    for (int i = 1; i != 10; ++i)
    {
        result *= i;
    }
    std::cout << "区间[1,10)所有数字的乘积: " << result << std::endl;

    return 0;
}