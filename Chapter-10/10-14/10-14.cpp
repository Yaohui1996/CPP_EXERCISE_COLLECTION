//
// Created by yaohui on 2022/5/1.
//

// 练习10.14：编写一个lambda，接受两个int，返回它们的和。

#include <iostream>

int main() {
    auto f = [](int a, int b) -> int { return a + b; };
    std::cout << f(6, 20) << std::endl;
    return 0;
}