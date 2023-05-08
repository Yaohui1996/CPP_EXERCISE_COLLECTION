// 练习1.6：解释下面程序片段是否合法。
// std::cout << "The sum of " << v1;
//           << " and " << v2;
//           << " is " << v1 + v2 << std::endl;
// 如果程序是合法的，它输出什么？如果程序不合法，原因何在？应该如何修正？

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
