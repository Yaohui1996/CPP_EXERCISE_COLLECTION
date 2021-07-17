#include <iostream>

int main() {
    int v1 = 3;
    int v2 = 9;
    std::cout << "The sum of " << v1
        << " and " << v2
        << " is " << v1 + v2 << std::endl;
    return 0;
}

// 原代码不合法
// 不合法的原因在于分号
// 删除分号即合法
