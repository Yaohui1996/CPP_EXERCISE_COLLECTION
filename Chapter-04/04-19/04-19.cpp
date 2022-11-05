#include <iostream>
#include <vector>

using namespace std;

int main() {
  int ival = 0;
  int *ptr = &ival;
  vector<int> vec{1, 2, 3, 4};

  bool a = (ptr != 0) && *ptr++;

  bool b = ival++ && ival;

  // bool c = vec[ival++] <= vec[ival];编译器抛出warning

  return 0;
}