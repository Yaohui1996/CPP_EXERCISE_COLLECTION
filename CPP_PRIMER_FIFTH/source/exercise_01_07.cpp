// 练习1.7：编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。

#include <iostream>
#include <cstdint>

int main() {
  int32_t v1 = 1;
  int32_t v2 = 3;
  std::cout << "The sum of " << v1
            << " and " << v2
            << " is " << v1 + v2 << std::endl;
  return 0;
}
