// 练习2.9：解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。
// (a) std::cin >> int input_value;
// (b) int i = { 3.14 };
// (c) double salary = wage = 9999.99;
// (d) int i = 3.14;

#include <iostream>

void a();

void b();

void c();

void d();

int main()
{
    a();
    b();
    c();
    d();
    return 0;
}

void a()
{
    // (a) std::cin >> int input_value;
    std::cout << "(a)" << std::endl;
    std::cout << "应该先声明变量, 再使用变量. " << std::endl;
    int input_value;
    std::cin >> input_value;
}

void b()
{
    // (b) int i = { 3.14 };
    std::cout << "(b)" << std::endl;
    std::cout << "i的类型应该为double" << std::endl;
    double i = {3.14};
    std::cout << i << std::endl;
}

void c()
{
    // (c) double salary = wage = 9999.99;
    std::cout << "(c)" << std::endl;
    std::cout << "应该先声明变量wage, 再对变量wage进行赋值操作. " << std::endl;
    double wage;
    double salary = wage = 9999.99;
    std::cout << salary << std::endl;
    std::cout << wage << std::endl;
}

void d()
{
    // (d) int i = 3.14;
    std::cout << "(d)" << std::endl;
    std::cout << "合法. 发生了强制转换. " << std::endl;
    int i = 3.14;
    std::cout << i << std::endl;
}
