//
// Created by Yaohui Li on 2021/2/14.
//

#include <vector>

using namespace std;

int add(int x, int y);

int sub(int x, int y);

int multiply(int x, int y);

int divide(int x, int y);

int main() {
  vector<int (*)(int, int)> v;
  v.push_back(add);
  v.push_back(sub);
  v.push_back(multiply);
  v.push_back(divide);
  return 0;
}

int add(int x, int y) { return x + y; }

int sub(int x, int y) { return x - y; }

int multiply(int x, int y) { return x * y; }

int divide(int x, int y) { return x / y; }
