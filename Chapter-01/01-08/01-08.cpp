#include <iostream>

int main() {
    std::cout << "/*";  //合法
    std::cout << std::endl;

    std::cout << "*/";  //合法
    std::cout << std::endl;

    // std::cout<</* "*/" */;            // 不合法
    std::cout << /* "*/ " */";  // 改正后合法
    std::cout << std::endl;

    std::cout << /* "*/ " /* " /*" */;  // 合法
    std::cout << std::endl;

    return 0;
}