//
// Created by Yaohui Li on 2022/5/2.
//

// 练习10.18：重写biggies，用partition代替find_if。
// 我们在10.3.1节练习10.13（第345页）中介绍了partition算法。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void biggies(vector<string> &v, string::size_type sz) {
  auto f = [sz](const string &s) -> bool { return s.size() >= sz; };
  auto p = partition(v.begin(), v.end(), f);
  std::for_each(v.begin(), p,
                [](const string &s) -> void { cout << s << " "; });
}

int main() {
  vector<string> v = {"the",  "quick", "red",  "fox", "jumps",
                      "over", "the",   "slow", "red", "turtle"};
  biggies(v, 5);
  return 0;
}