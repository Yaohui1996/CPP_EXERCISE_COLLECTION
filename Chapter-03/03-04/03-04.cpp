#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  if (s1 == s2) {
    cout << "字符串相等" << endl;
  } else if (s1.size() != s2.size()) {
    s1.size() > s2.size() ? cout << s1 << endl : cout << s2 << endl;
  }

  return 0;
}