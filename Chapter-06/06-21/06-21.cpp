//
// Created by Yaohui Li on 2021/2/14.
//
#include <iostream>

using namespace std;

int compareIntAndPointer(const int &a, const int *p);

int main() {
  int a = 55;
  int b = 12;
  int *p = &b;
  cout << compareIntAndPointer(a, p) << endl;
  return 0;
}

int compareIntAndPointer(const int &a, const int *p) { return a > *p ? a : *p; }