//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>

using namespace std;

void f(double x, int y);

void f(int x);

void f(int x, int y);

void f(double x, double y);

int main() {
  f(2.56, 42);
  f(42);
  f(42, 0);
  f(2.56, 3.14);
  return 0;
}

void f(double x, int y) {
  cout << x << " 是 " << typeid(x).name() << "    " << y << " 是 "
       << typeid(y).name() << endl;
}

void f(int x) { cout << x << " 是 " << typeid(x).name() << endl; }

void f(int x, int y) {
  cout << x << " 是 " << typeid(x).name() << "    " << y << " 是 "
       << typeid(y).name() << endl;
}

void f(double x, double y) {
  cout << x << " 是 " << typeid(x).name() << "    " << y << " 是 "
       << typeid(y).name() << endl;
}