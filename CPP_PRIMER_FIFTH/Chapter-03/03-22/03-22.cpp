#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> text = {"haha", "xixi", "", "hehe"};
  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto &item : *it) {
      item = toupper(item);
    }
    cout << *it << endl;
  }

  return 0;
}