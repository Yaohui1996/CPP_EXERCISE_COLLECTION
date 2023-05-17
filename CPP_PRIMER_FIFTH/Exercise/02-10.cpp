// 练习2.10：下列变量的初值分别是什么？
// std::string global_str;
// int global_int;
// int main()
// {
//     int local_int;
//     std::string local_str;
// }

#include <iostream>

std::string global_str;
int global_int;

int main() {
  int local_int;         // 定义在函数体内部，不被初始化
  std::string local_str; // 定义在函数体内部，不被初始化
  std::cout << "local_int=" << local_int << std::endl;
  std::cout << "local_str=" << local_str << std::endl;
  std::cout << "global_int=" << global_int << std::endl;
  std::cout << "global_str=" << global_str << std::endl;
  return 0;
}