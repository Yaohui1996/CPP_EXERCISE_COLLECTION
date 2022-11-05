#include <iostream>

int main() {
  int i = 2;
  double d = 2.0;
  i *= static_cast<int>(d);
  std::cout << i << std::endl;
  return 0;
}