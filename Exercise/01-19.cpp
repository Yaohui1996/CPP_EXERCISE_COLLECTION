// 练习1.19：修改你为1.4.1节练习1.10（第11页）所编写的程序（打印一个范围内的数），使其能处理用户输入的第一个数比第二个数小的情况。

#include <iostream>

int main() {
  int a, b;
  std::cout << "请输入第1个数字: ";
  std::cin >> a;
  std::cout << "请输入第2个数字: ";
  std::cin >> b;
  if (a < b) {
    int temp = a;
    a = b;
    b = temp;
  }
  for (int i = a; i >= b; --i) {
    std::cout << i << "\n";
  }
  return 0;
}
