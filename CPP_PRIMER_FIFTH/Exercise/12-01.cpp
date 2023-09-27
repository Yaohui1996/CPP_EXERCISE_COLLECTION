// 练习12.1：在此代码的结尾，b1和b2各包含多少个元素？
// StrBlob b1;
// {
//     StrBlob b2 = {"a", "an", "the"};
//     b1 = b2;
//     b2.push_back("about");
// }

#include "StrBlob.h"
#include <initializer_list>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

int main()
{
    std::cout << "b1包含4个元素, b2已经不存在了" << std::endl;
    std::cout << "验证: " << std::endl;
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
    }
    std::cout << "b1.size()=" << b1.size() << std::endl;
    // std::cout << "b2.size()=" << b2.size() << std::endl;

    return 0;
}