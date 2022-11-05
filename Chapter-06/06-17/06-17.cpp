//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>
#include <string>

using namespace std;

bool hasUpper(const string &s);

void upperToLower(string &s);

int main() {
  string s = "HHH";
  cout << hasUpper(s) << endl;
  upperToLower(s);
  cout << s << endl;
  return 0;
}

bool hasUpper(const string &s) {
  for (auto i = 0; i != s.size(); ++i) {
    if (isupper(s[i]))
      return true;
  }
  return false;
}

void upperToLower(string &s) {
  for (auto i = 0; i != s.size(); ++i) {
    s[i] = tolower(s[i]);
  }
}