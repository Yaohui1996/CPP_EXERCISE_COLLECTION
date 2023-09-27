#include "LC_COMMON_HEADER.h"
//* 409_最长回文串.cpp
//* https://leetcode.cn/problems/longest-palindrome/

class Solution
{
  public:
    int longestPalindrome(string s)
    {
        std::unordered_map<char, uint32_t> counter;
        for (const char ch : s)
        {
            ++counter[ch];
        }
        char max_ch = '*';
        uint32_t max_single = 0;
        for (auto iter = counter.cbegin(); iter != counter.cend(); ++iter)
        {
            if (iter->second % 2 == 1 && iter->second > max_single)
            {
                max_ch = iter->first;
                max_single = iter->second;
            }
        }
        int ret = 0;
        if (max_single == 0)
        {
            for (auto iter = counter.cbegin(); iter != counter.cend(); ++iter)
            {
                if (iter->second % 2 == 0)
                {
                    ret += iter->second;
                }
                else
                {
                    ret += iter->second - 1;
                }
            }
        }
        else
        {
            ret += max_single;
            for (auto iter = counter.cbegin(); iter != counter.cend(); ++iter)
            {
                if (iter->first == max_ch)
                {
                    continue;
                }
                if (iter->second % 2 == 0)
                {
                    ret += iter->second;
                }
                else
                {
                    ret += iter->second - 1;
                }
            }
        }
        return ret;
    }
};