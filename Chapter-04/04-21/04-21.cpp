#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec{1, 2, 3, 4, 5, 6, 7};
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    (*it) % 2 == 0 ?: (*it) *= 2;
  }
  for (const int &x : vec) {
    cout << x << endl;
  }
  return 0;
}