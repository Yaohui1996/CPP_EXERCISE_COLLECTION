// 练习2.1：类型int、long、long
// long和short的区别是什么？无符号类型和带符号类型的区别是什么？float和double的区别是什么？

#include <iomanip>
#include <iostream>
#include <limits>

int main()
{
    std::cout << "type\t\t";
    std::cout << "│ lowest()\t\t";
    std::cout << "│ min()\t\t\t";
    std::cout << "│ max()\t\t";
    std::cout << std::endl;
    std::cout << "bool\t\t";
    std::cout << "| " << std::numeric_limits<bool>::lowest() << "\t\t\t";
    std::cout << "| " << std::numeric_limits<bool>::min() << "\t\t\t";
    std::cout << "| " << std::numeric_limits<bool>::max() << "\t\t";
    std::cout << std::endl;
    std::cout << "uchar\t\t";
    std::cout << "| " << +std::numeric_limits<unsigned char>::lowest() << "\t\t\t";
    std::cout << "| " << +std::numeric_limits<unsigned char>::min() << "\t\t\t";
    std::cout << "| " << +std::numeric_limits<unsigned char>::max() << "\t\t";
    std::cout << std::endl;
    std::cout << "int\t\t";
    std::cout << "| " << std::numeric_limits<int>::lowest() << "\t\t";
    std::cout << "| " << std::numeric_limits<int>::min() << "\t\t";
    std::cout << "| " << std::numeric_limits<int>::max() << "\t\t";
    std::cout << std::endl;
    std::cout << "long\t\t";
    std::cout << "| " << std::numeric_limits<long>::lowest() << "\t";
    std::cout << "| " << std::numeric_limits<long>::min() << "\t";
    std::cout << "| " << std::numeric_limits<long>::max() << "\t";
    std::cout << std::endl;
    std::cout << "long long\t";
    std::cout << "| " << std::numeric_limits<long long>::lowest() << "\t";
    std::cout << "| " << std::numeric_limits<long long>::min() << "\t";
    std::cout << "| " << std::numeric_limits<long long>::max() << "\t";
    std::cout << std::endl;
    std::cout << "short\t\t";
    std::cout << "| " << std::numeric_limits<short>::lowest() << "\t\t";
    std::cout << "| " << std::numeric_limits<short>::min() << "\t\t";
    std::cout << "| " << std::numeric_limits<short>::max() << "\t\t";
    std::cout << std::endl;
    std::cout << "float\t\t";
    std::cout << "| " << std::numeric_limits<float>::lowest() << "\t\t";
    std::cout << "| " << std::numeric_limits<float>::min() << "\t\t";
    std::cout << "| " << std::numeric_limits<float>::max() << "\t\t";
    std::cout << std::endl;
    std::cout << "double\t\t";
    std::cout << "| " << std::numeric_limits<double>::lowest() << "\t\t";
    std::cout << "| " << std::numeric_limits<double>::min() << "\t\t";
    std::cout << "| " << std::numeric_limits<double>::max() << "\t\t";
    std::cout << std::endl;
    std::cout << "long double\t";
    std::cout << "| " << std::numeric_limits<long double>::lowest() << "\t";
    std::cout << "| " << std::numeric_limits<long double>::min() << "\t\t";
    std::cout << "| " << std::numeric_limits<long double>::max() << "\t\t";
    std::cout << std::endl;
    return 0;
}

// int、long、long long、short的区别：
// int：整型｜最小16位
// long：长整型｜最小32位
// long long：长整形｜最小32位
// short：短整型｜最小16位

// 无符号类型和带符号类型的区别：
// 无符号类型只能表示非负的数，且所有比特都用来存储值。

// float和double的区别：
// float：单精度浮点数｜6位有效数字
// double：双精度浮点数｜10位有效数字
