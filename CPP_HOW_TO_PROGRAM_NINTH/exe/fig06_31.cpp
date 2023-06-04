#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

uint32_t factorial(const uint32_t);

int main() {
  for (uint32_t n = 0; n <= 10; ++n) {
    cout << setw(2) << n << "! = " << factorial(n) << endl;
  }
  return 0;
}

uint32_t factorial(const uint32_t n) {
  uint32_t ret = 1;
  for (uint32_t i = n; i > 0; --i) {
    ret *= i;
  }
  return ret;
}
