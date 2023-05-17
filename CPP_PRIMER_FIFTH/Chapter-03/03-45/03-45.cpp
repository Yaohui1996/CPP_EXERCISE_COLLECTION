#include <iostream>

using namespace std;

int main() {
  int ia[] = {1, 2, 3};

  // version1
  cout << "version1" << endl;
  for (auto &x : ia) {
    cout << x << endl;
  }

  // version2
  cout << "version2" << endl;
  for (auto i = 0; i != 3; ++i) {
    cout << ia[i] << endl;
  }

  // version3
  cout << "version3" << endl;
  for (auto *p = &ia[0]; p != &ia[3]; ++p) {
    cout << *p << endl;
  }

  return 0;
}