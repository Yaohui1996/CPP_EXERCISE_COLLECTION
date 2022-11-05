//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>

using namespace std;

void print(const int &i);

void print(const int *j, const int size);

int main() {
  int i = 0, j[2] = {0, 1};
  print(i);
  print(&j[0], 2);
  return 0;
}

void print(const int &i) { cout << i << endl; }

void print(const int *j, const int size) {
  for (int i = 0; i != size; ++i)
    cout << j[i];
  cout << endl;
}