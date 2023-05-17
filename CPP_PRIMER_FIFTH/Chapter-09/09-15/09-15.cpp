//
// Created by Yaohui Li on 2021/2/21.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1{1, 2, 3};
  vector<int> v2{4, 5, 6};
  vector<int> v3{1, 2, 3};
  if (v1 == v2)
    cout << true << endl;
  if (v1 == v3)
    cout << true << endl;

  return 0;
}