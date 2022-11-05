#include <iostream>

int main() {
  // auto 会忽略顶层const，忽略引用
  // decltype 会保留引用
  return 0;
}