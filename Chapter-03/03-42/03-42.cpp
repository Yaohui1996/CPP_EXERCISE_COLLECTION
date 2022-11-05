#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v{1, 2, 3, 4, 5};
  int a[5];
  for (int i = 0; i < 5; ++i) {
    a[i] = v[i];
  }
  return 0;
}