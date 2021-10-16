#include <iostream>

int main() {
    std::cout
        << "请依次输入一组数，程序将对其进行求和，输入 Command + D 即可终止输入"
        << std::endl;

    double sum = 0.0;
    double inputNum;
    while (std::cin >> inputNum) {
        sum += inputNum;
    }
    std::cout << "和为： " << sum << std::endl;
    return 0;
}