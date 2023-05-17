#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1{0, 1, 1, 2};
  vector<int> v2{0, 1, 1, 2, 3, 5, 8};

  vector<int>::size_type length = v1.size() < v2.size() ? v1.size() : v2.size();

  for (vector<int>::size_type i = 0; i != length; ++i) {
    if (v1[i] == v2[i])
      continue;
    else {
      cout << "不是前缀" << endl;
      break;
    }
  }

  return 0;
}