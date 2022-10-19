// 练习1.5：我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。

#include <iostream>

int main() {
    std::cout << "4 + 2 = " << 4 + 2 << std::endl;
    std::cout << "4 * 2 = " << 4 * 2 << std::endl;
    return 0;
}
