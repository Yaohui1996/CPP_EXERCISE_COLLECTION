#include <iostream>

using namespace std;

int fact();

int main() {
  cout << fact() << endl;
  return 0;
}

int fact() {
  cout << "Please input n" << endl;
  int n;
  cin >> n;
  int ret = 1;
  for (int i = 1; i <= n; ++i) {
    ret *= i;
  }
  return ret;
}