//
// Created by yaohui on 2022/5/1.
//

// 练习10.16：使用lambda编写你自己版本的biggies。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void biggies(const vector<string> &v, string::size_type sz) {
  auto f = [sz](const string &s) -> void {
    if (s.size() >= sz) {
      std::cout << s << " ";
    }
  };
  std::for_each(v.begin(), v.end(), f);
}

int main() {
  vector<string> v = {"the",  "quick", "red",  "fox", "jumps",
                      "over", "the",   "slow", "red", "turtle"};
  biggies(v, 5);
  return 0;
}