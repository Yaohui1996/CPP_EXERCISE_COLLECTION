//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>

using namespace std;

void swap(int &i1, int &i2);

int main() {
  int a = 10;
  int b = 5;
  cout << a << " and " << b << endl;
  swap(a, b);
  cout << a << " and " << b << endl;

  return 0;
}

void swap(int &i1, int &i2) {
  int temp = i1;
  i1 = i2;
  i2 = temp;
}