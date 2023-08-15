#include "LC_COMMON_HEADER.h"
//* 00521_最长特殊序列_I.cpp
//* https://leetcode.cn/problems/longest-uncommon-subsequence-i/

class Solution {
public:
  int findLUSlength(string a, string b) {
    return a == b ? -1 : std::max(a.size(), b.size());
  }
};