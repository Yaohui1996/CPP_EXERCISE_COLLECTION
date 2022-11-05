//
// Created by Yaohui Li on 2021/2/21.
//

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  list<int> l1{1, 2, 3, 4, 5};
  vector<double> v1(l1.begin(), l1.end());
  for (const auto &i : v1) {
    cout << i << endl;
  }

  vector<int> v3{4, 5, 6};
  vector<double> v4(v3.begin(), v3.end());
  for (const auto &i : v4) {
    cout << i << endl;
  }

  return 0;
}