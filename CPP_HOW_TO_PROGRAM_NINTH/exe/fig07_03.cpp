#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  array<int, 5> arr;
  for (size_t i = 0; i != arr.size(); ++i) {
    arr[i] = 0;
  }
  cout << "Element" << setw(13) << "Value" << endl;
  for (size_t i = 0; i != arr.size(); ++i) {
    cout << setw(7) << i << setw(13) << arr[i] << endl;
  }

  return 0;
}