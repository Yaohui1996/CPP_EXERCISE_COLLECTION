#include <iostream>

using namespace std;

void swap(int *pi1, int *pi2);

int main() {
  int a = 10;
  int b = 5;
  cout << a << " and " << b << endl;
  swap(&a, &b);
  cout << a << " and " << b << endl;

  return 0;
}

void swap(int *pi1, int *pi2) {
  int temp = *pi1;
  *pi1 = *pi2;
  *pi2 = temp;
}