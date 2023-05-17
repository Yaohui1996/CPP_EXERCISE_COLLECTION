// 练习1.12：下面的for循环完成了什么功能？sum的终值是多少？
// int sum = 0;
// for (int i = -100; i <= 100; ++i)
//     sum += i;

#include <iostream>

int main() {
  int sum = 0;
  for (int i = -100; i <= 100; ++i)
    sum += i;
  std::cout << sum << std::endl;
  return 0;
}

// 对从 -100 到 100 的整数求和
// sum最终等于0
