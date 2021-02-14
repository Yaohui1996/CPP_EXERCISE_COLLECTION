#include <iostream>

int main() {

    int i = 0, &r = i;              //i是int型变量，r是i的别名
    auto a = r;                     //a是int型变量
    const int ci = i, &cr = ci;     //ci是int型常量，cr是ci的别名
    auto b = ci;                    //b是int型变量
    auto c = cr;                    //c是int型变量
    auto d = &i;                    //d是指向int型变量的普通指针
    auto e = &ci;                   //e是指向int型常量的普通指针
    const auto f = ci;              //f是int型常量
    auto &g = ci;                   //g是ci的别名，是对int型常量的引用
    const auto &j = 42;             //j是对整数的常量引用


    /*
     * 结果：
     * a a = 0    a = 42
     * b b = 0    b = 42 //auto会忽略顶层const
     * c c = 0    c = 42
     * d d 指向i          //出错，不能给指针赋值42
     * e e 指向ci         //出错，不能给指针赋值42
     * g g = 0           //出错，不能给常量赋值
     */
    return 0;
}