#include <iostream>

int main() {
  // const int buf;//不合法，因为没有初始化

  int cnt = 0;

  const int sz = cnt;

  ++cnt;

  //++sz;//不合法，不能改变常量的值

  return 0;
}