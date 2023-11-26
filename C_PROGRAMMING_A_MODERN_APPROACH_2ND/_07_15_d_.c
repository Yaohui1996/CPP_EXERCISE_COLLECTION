// 编程计算正整数的阶乘：
// Enter a positive integer: 6
// Factorial of 6: 720
// (a) 用short类型变量存储阶乘的值。为了正确打印出n的阶乘，n的最大值是多少？
// (b) 用int类型变量重复(a)。
// (c) 用long类型变量重复(a)。
// (d) 如果你的编译器支持long long类型，用long long类型变量重复(a)。
// (e) 用float类型变量重复(a)。
// (f) 用double类型变量重复(a)。
// (g) 用long double类型变量重复(a)。
// 在(e)～(g)几种情况下，程序会显示阶乘的近似值，不一定是准确值。

#include <stdio.h>

int main() {
    // (d)
    printf("Enter a positive integer: ");
    long long n;
    scanf("%lld", &n);
    long long result = 1;
    for (long long i = 1; i <= n; ++i) {
        result *= i;
    }
    printf("%lld的阶乘为: %lld\n", n, result);
    // n_max = 20
    return 0;
}
