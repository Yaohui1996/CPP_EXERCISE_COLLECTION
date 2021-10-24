#include <iostream>

int main() {
    int a, b;
    std::cout << "请输入第1个数字: ";
    std::cin >> a;
    std::cout << "请输入第2个数字: ";
    std::cin >> b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i >= b; --i) {
        std::cout << i << "\n";
    }

    return 0;
}