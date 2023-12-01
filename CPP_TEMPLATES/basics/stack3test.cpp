// basics/stack3test.cpp
#include "stack3.hpp"
#include <cstdlib>
#include <deque>
#include <iostream>

int main()
{
    try
    {
        // int栈：
        Stack<int> intStack;

        // double栈，它使用std::deque来管理元素
        Stack<double, std::deque<double>> dblStack;
        // 使用int栈
        intStack.push(7);
        std::cout << intStack.top() << std::endl;
        intStack.pop();

        // 使用double栈
        dblStack.push(42.42);
        std::cout << dblStack.top() << std::endl;
        dblStack.pop();
        dblStack.pop();
    }
    catch (std::exception const &ex)
    {
        std::cerr << "Exception: " << ex.what() << std::endl;
        return EXIT_FAILURE; // 退出程序，且有ERROR标记
    }
}