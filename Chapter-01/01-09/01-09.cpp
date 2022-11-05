#include <iostream>

int main() {
  int sum = 0;
  int counter = 50;
  while (counter <= 100) {
    sum += counter;
    ++counter;
  }
  std::cout << "The sum from 50 to 100 is " << sum << std::endl;
  return 0;
}