// 练习1.2：改写程序，让它返回-1。返回值-1通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理main返回的错误标识。

#include <iostream>

int main() {
  std::cout << "hello, world!" << std::endl;
  return -1;
}