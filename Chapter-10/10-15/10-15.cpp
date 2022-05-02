//
// Created by yaohui on 2022/5/1.
//

// 练习10.15：编写一个lambda，捕获它所在函数的int，并接受一个int参数。lambda应该返回捕获的int和int参数的和。

#include <iostream>

int main() {
    int a = 100;
    auto f = [a](int b) -> int { return a + b; };
    std::cout << f(50) << std::endl;
    return 0;
}