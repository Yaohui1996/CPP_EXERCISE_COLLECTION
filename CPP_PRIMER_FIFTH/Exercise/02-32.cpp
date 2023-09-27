// 练习2.32：下面的代码是否合法？如果非法，请设法将其修改正确。
// int null = 0, *p = null;

#include <iostream>

int main()
{
    // int null = 0, *p = null;
    std::cout << "编译器抛出: error: invalid conversion from 'int' to 'int*' "
                 "[-fpermissive]"
              << std::endl;
    std::cout << "原因: null类型为int, p类型为int*, "
                 "不可以将int类型的值赋给int*类型的变量"
              << std::endl;
    return 0;
}