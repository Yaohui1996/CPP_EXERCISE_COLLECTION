// 练习1.8：指出下列哪些输出语句是合法的（如果有的话）：
// std::cout << "/*";
// std::cout << "*/";
// std::cout << /* "*/" */;
// std::cout << /* "*/" /* "/*" */;

#include <iostream>

int main()
{
    std::cout << "/*"; // 合法
    std::cout << std::endl;
    std::cout << "*/"; // 合法
    std::cout << std::endl;
    // std::cout<</* "*/" */;            // 不合法
    std::cout << /* "*/ " */"; // 改正后合法
    std::cout << std::endl;
    std::cout << /* "*/ " /* " /*" */; // 合法
    std::cout << std::endl;
    return 0;
}
