#include <iostream>

int main() {
    int a = 10;
    int b = 9;
    int c = 8;
    int d = 7;
    if (a > b && b > c && c > d)
        std::cout << true;
    return 0;
}