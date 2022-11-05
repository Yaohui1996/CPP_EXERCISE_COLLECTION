#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  unsigned int counter = 0;
  for (auto it = s.begin(); it != s.end(); ++it) {
    if (tolower(*it) == 'a')
      ++counter;
    else if (tolower(*it) == 'e')
      ++counter;
    else if (tolower(*it) == 'i')
      ++counter;
    else if (tolower(*it) == 'o')
      ++counter;
    else if (tolower(*it) == 'u')
      ++counter;
  }
  cout << counter << endl;

  return 0;
}