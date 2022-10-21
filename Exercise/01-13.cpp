// 练习1.13：使用for循环重做1.4.1节中的所有练习（第11页）。

#include <iostream>

int main() {
  //例题
  int sum = 0;
  for (int val = 1; val <= 10; ++val) {
    sum += val;
  }
  std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

  // 1.9
  int sum19 = 0;
  for (int i = 50; i <= 100; ++i) {
    sum19 += i;
  }
  std::cout << "The sum from 50 to 100 is " << sum19 << std::endl;

  // 1.10
  for (int i = 10; i >= 0; --i) {
    std::cout << i << std::endl;
  }

  // 1.11
  int beginNum;
  int endNum;
  std::cout << "请输入起始整数：" << std::endl;
  std::cin >> beginNum;
  std::cout << "请输入终止整数：" << std::endl;
  std::cin >> endNum;
  if (beginNum == endNum) {
    std::cout << beginNum << std::endl;
  } else if (beginNum > endNum) {
    for (; beginNum >= endNum; --beginNum) {
      std::cout << beginNum << std::endl;
    }
  } else if (beginNum < endNum) {
    for (; beginNum <= endNum; ++beginNum) {
      std::cout << beginNum << std::endl;
    }
  }
  return 0;
}