#include <iostream>

int main(int argc, char *argv[])
{
    // 为了调用拷贝构造函数，必须拷贝它的实参
    // 但是为了拷贝它的实参，必须调用拷贝构造函数
    // 陷入循环......
    return 0;
}