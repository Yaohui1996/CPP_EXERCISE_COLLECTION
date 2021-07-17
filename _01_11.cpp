#include <iostream>

int main() {
    int beginNum;
    int endNum;
    std::cout << "请输入起始整数：" << std::endl;
    std::cin >> beginNum;
    std::cout << "请输入终止整数：" << std::endl;
    std::cin >> endNum;

    if (beginNum == endNum) {
        std::cout << beginNum << std::endl;
    }
    else if (beginNum > endNum) {
        while (beginNum >= endNum) {
            std::cout << beginNum << std::endl;
            --beginNum;
        }
    }
    else if (beginNum < endNum) {
        while (beginNum <= endNum) {
            std::cout << beginNum << std::endl;
            ++beginNum;
        }
    }
    return 0;
}