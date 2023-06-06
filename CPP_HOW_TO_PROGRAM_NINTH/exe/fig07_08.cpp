#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const size_t array_size = 4;
  array<int, array_size> arr = {10, 20, 30, 40};
  int total = 0;
  for (size_t i = 0; i != arr.size(); ++i) {
    total += arr[i];
  }
  cout << "Total array element is: " << total << endl;
  cout << "Element" << setw(13) << "Value" << endl;
  for (size_t i = 0; i != arr.size(); ++i) {
    cout << setw(7) << i << setw(13) << arr[i] << endl;
  }

  return 0;
}