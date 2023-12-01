// basics/stack4test.cpp
#include "stack4.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main()
{
    try
    {
        Stack<int, 20> int20Stack;          // 可以存储20个int元素的栈
        Stack<int, 40> int40Stack;          // 可以存储40个int元素的栈
        Stack<std::string, 40> stringStack; // 可存储40个string元素的栈

        // 使用可存储20个int元素的栈
        int20Stack.push(7);
        std::cout << int20Stack.top() << std::endl;
        int20Stack.pop();

        // 使用可存储40个string的栈
        stringStack.push("hello");
        std::cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (std::exception const &ex)
    {
        std::cerr << "Exception: " << ex.what() << std::endl;
        return EXIT_FAILURE; // 退出程序且有ERROR标记
    }
}