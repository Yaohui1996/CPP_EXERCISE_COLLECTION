#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  unsigned int aeiouNums = 0;
  unsigned int spaceNums = 0;
  unsigned int tabNums = 0;
  unsigned int enterNums = 0;

  for (auto it = s.begin(); it != s.end(); ++it) {
    if (tolower(*it) == 'a')
      ++aeiouNums;
    else if (tolower(*it) == 'e')
      ++aeiouNums;
    else if (tolower(*it) == 'i')
      ++aeiouNums;
    else if (tolower(*it) == 'o')
      ++aeiouNums;
    else if (tolower(*it) == 'u')
      ++aeiouNums;
    else if (*it == ' ')
      ++spaceNums;
    else if (*it == '\t')
      ++tabNums;
    else if (*it == '\r')
      ++enterNums;
  }
  cout << aeiouNums << endl;
  cout << spaceNums << endl;
  cout << tabNums << endl;
  cout << enterNums << endl;

  return 0;
}