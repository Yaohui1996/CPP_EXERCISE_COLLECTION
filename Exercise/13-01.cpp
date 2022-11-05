// 练习13.1：拷贝构造函数是什么？什么时候使用它？
// 解答:
// (a) 如果一个构造函数的第一个参数是自身类类型的引用, 且任何额外参数都有默认值,
// 则此构造函数是拷贝构造函数. (b) 类类型的对象进行拷贝初始化的时候使用

#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "如果一个构造函数的第一个参数是自身类类型的引用, "
               "且任何额外参数都有默认值, 则此构造函数是拷贝构造函数."
            << std::endl;
  std::cout << "类类型的对象进行拷贝初始化的时候使用" << std::endl;
  return 0;
}