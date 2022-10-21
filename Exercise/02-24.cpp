// 练习2.24：在下面这段代码中为什么p合法而lp非法？
// int i = 42;
// void *p = &i;
// long *lp = &i;

#include <iostream>

int main() {
  std::cout << "因为: void*可以存放任意对象的地址" << std::endl;
  std::cout << "lp应该指向long int型的变量，但i是int型变量" << std::endl;
  int i = 42;
  void *p = &i; //void*可以存放任意对象的地址
  //long *lp = &i;//非法，因为lp应该指向long int型的变量，但i是int型变量
  return 0;
}