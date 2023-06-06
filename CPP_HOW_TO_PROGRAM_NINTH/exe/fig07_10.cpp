#include <array>
#include <cstddef>
#include <cstdint>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

int main() {
  default_random_engine engine(static_cast<uint32_t>(time(0)));
  uniform_int_distribution<uint32_t> randomInt(1, 6);
  array<uint32_t, 6> arr;
  for (size_t i = 0; i != arr.size(); ++i) {
    arr[i] = 0;
  }
  for (size_t i = 0; i != 60000000; ++i) {
    const auto val = randomInt(engine);
    ++arr[val - 1];
  }
  for (size_t i = 0; i != arr.size(); ++i) {
    cout << i << setw(7) << ": " << setw(13) << arr[i] << endl;
  }
  return 0;
}