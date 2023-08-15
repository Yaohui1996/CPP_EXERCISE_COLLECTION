#include "LC_COMMON_HEADER.h"
//* 13.罗马数字转整数.cpp
//* https://leetcode.cn/problems/roman-to-integer/

class Solution {
private:
  static std::unordered_map<char, int> m;

public:
  int romanToInt(string s) {
    int ret = 0;
    size_t i = 0;
    while (i < s.size() - 1) {
      if (s[i] == 'I') {
        if (s[i + 1] == 'V') {
          ret += 4;
          i += 2;
        } else if (s[i + 1] == 'X') {
          ret += 9;
          i += 2;
        } else {
          ret += 1;
          ++i;
        }
      } else if (s[i] == 'X') {
        if (s[i + 1] == 'L') {
          ret += 40;
          i += 2;
        } else if (s[i + 1] == 'C') {
          ret += 90;
          i += 2;
        } else {
          ret += 10;
          ++i;
        }
      } else if (s[i] == 'C') {
        if (s[i + 1] == 'D') {
          ret += 400;
          i += 2;
        } else if (s[i + 1] == 'M') {
          ret += 900;
          i += 2;
        } else {
          ret += 100;
          ++i;
        }
      } else {
        ret += m[s[i]];
        ++i;
      }
    }
    if (i == s.size()) {
      return ret;
    }
    ret += m[s[i]];
    return ret;
  }
};
std::unordered_map<char, int> Solution::m = {
    {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
    {'C', 100}, {'D', 500}, {'M', 1000},
};