#include "LC_COMMON_HEADER.h"
//* 389_找不同.cpp
//* https://leetcode.cn/problems/find-the-difference/

class Solution {
public:
  char findTheDifference(string s, string t) {
    std::vector<int32_t> counter(26, 0);
    for (const char ch : s) {
      ++counter[(int)ch - 97];
    }
    for (const char ch : t) {
      --counter[(int)ch - 97];
    }
    for (size_t i = 0; i != counter.size(); ++i) {
      if (counter[i] < 0) {
        return (char)(i + 97);
      }
    }
    return 'a';
  }
};