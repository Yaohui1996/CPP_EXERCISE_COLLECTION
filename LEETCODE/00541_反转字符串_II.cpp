#include "LC_COMMON_HEADER.h"
//* 00541_反转字符串_II.cpp
//* https://leetcode.cn/problems/reverse-string-ii/
class Solution {
private:
  void reverse_substr(std::string::iterator beg, std::string::iterator end) {
    while (beg < end) {
      std::swap(*beg, *end);
      ++beg;
      --end;
    }
  }

public:
  string reverseStr(string s, int k) {
    for (size_t i = 0; i != s.size() / (2 * k); ++i) {
      const size_t beg = i * (2 * k);
      const size_t end = i * (2 * k) + k;
      reverse_substr(s.begin() + beg, s.begin() + end - 1);
    }
    size_t i = (s.size() / (2 * k)) * (2 * k);
    size_t j = s.size();
    if (j - i < k) {
      reverse_substr(s.begin() + i, s.begin() + j - 1);
    } else {
      reverse_substr(s.begin() + i, s.begin() + i + k - 1);
    }

    return s;
  }
};
