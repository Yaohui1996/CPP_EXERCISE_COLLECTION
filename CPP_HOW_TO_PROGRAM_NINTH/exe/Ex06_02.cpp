#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

uint32_t cube(const uint32_t);

int main() {
  int32_t x = 0;
  for (x = 1; x <= 10; ++x) {
    cout << cube(x) << endl;
  }
  return 0;
}

uint32_t cube(const uint32_t y) { return y * y * y; }