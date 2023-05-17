#include <iostream>

int main() {
  int i = 1;
  int j = 2;
  int k = 3;
  bool m = i != j < k;
  /*
   * 顺序如下
   * i != (j < k)
   */
  std::cout << m << std::endl;
  return 0;
}