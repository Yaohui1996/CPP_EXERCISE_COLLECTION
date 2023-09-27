#include "LC_COMMON_HEADER.h"
//* 392_判断子序列.cpp
//* https://leetcode.cn/problems/is-subsequence/

class Solution
{
  public:
    bool isSubsequence(string s, string t)
    {
        size_t i = 0;
        for (size_t j = 0; j != t.size(); ++j)
        {
            if (t[j] == s[i])
            {
                ++i;
            }
            if (i == s.size())
            {
                break;
            }
        }
        if (i == s.size())
        {
            return true;
        }
        return false;
    }
};