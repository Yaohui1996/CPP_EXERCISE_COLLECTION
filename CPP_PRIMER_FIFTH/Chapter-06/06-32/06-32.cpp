//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>

using namespace std;

int &get(int *arry, int index) { return arry[index]; } // 合法

int main() {
  int ia[10];
  for (int i = 0; i != 10; ++i)
    get(ia, i) = i;

  for (const auto &item : ia)
    cout << item << endl;
  return 0;
}