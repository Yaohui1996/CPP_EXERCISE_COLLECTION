#include <iostream>

int main() {
    const char *cp = "Hello World";
    if (cp && *cp) {
        std::cout << true << std::endl;
    }
    /*
     * 顺序如下
     * cp && (*cp)
     * 先解引用
     * 然后判断左边为true还是false
     * 再判断右边
     */
    return 0;
}