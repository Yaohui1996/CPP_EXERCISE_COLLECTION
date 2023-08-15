#include "LC_COMMON_HEADER.h"
//* 58.最后一个单词的长度.cpp
//* https://leetcode.cn/problems/length-of-last-word/

class Solution {
public:
  int lengthOfLastWord(string s) {
    //* 跳过末尾的空格
    int i = s.size() - 1;
    for (; i >= 0; --i) {
      const auto ch = s[i];
      if (ch == ' ') {
        continue;
      }
      break;
    }
    //* 开始计数
    int ret = 0;
    for (; i >= 0; --i) {
      const auto ch = s[i];
      if (ch != ' ') {
        ++ret;
        continue;
      }
      return ret;
    }
    return ret;
  }
};