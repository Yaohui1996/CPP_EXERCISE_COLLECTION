#include "LC_COMMON_HEADER.h"
//* 00459_重复的子字符串.cpp
//* https://leetcode.cn/problems/repeated-substring-pattern/

class Solution {
public:
  bool repeatedSubstringPattern(string s) {
    if (s.size() <= 1) {
      return false;
    }
    std::vector<size_t> maybe;
    for (size_t i = 1; i != s.size(); ++i) {
      if (s.size() % i == 0) {
        maybe.push_back(i);
      }
    }
    if (maybe.empty()) {
      return false;
    }

    for (const auto t : maybe) {
      std::string sub_str = std::string(s.cbegin(), s.cbegin() + t);
      // std::cout << "sub_str="<<sub_str<<std::endl;
      bool can = true;
      for (size_t i = 0; i < s.size() / t; ++i) {
        if (i == 0) {
          continue;
        }
        if (sub_str != s.substr(i * t, t)) {
          can = false;
          break;
        }
      }
      if (can) {
        return true;
      }
    }
    return false;
  }
};