//
// Created by Yaohui Li on 2022/2/9.
//

// 练习10.11：编写程序，使用stable_sort和isShorter将传递给你的elimDups版本的vector排序。
// 打印vector的内容，验证你的程序的正确性。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isShorter(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

void elimDups(vector<string> &vec) {
  stable_sort(vec.begin(), vec.end(), isShorter);
  auto end_unique = unique(vec.begin(), vec.end());
  vec.erase(end_unique, vec.end());
}

int main() {
  vector<string> vec = {"the",  "quick", "red",  "fox", "jumps",
                        "over", "the",   "slow", "red", "turtle"};

  elimDups(vec);
  for (const auto &i : vec) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}