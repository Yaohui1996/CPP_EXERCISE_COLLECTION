#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
  const char a[] = {'h', 'e', 'l', 'l', 'o', '\0'};
  const char b[] = {'h', 'e', 'l', 'l', 'o', '\0'};

  if (strcmp(a, b) == 0)
    cout << "相等" << endl;

  string s1 = "hello";
  string s2 = "hello";

  if (s1 == s2)
    cout << "相同" << endl;

  return 0;
}