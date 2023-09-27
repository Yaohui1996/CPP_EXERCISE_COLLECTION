#include "LC_COMMON_HEADER.h"
//* 00500_键盘行.cpp
//* https://leetcode.cn/problems/keyboard-row/

class Solution
{
  private:
    static std::unordered_map<char, uint32_t> ch2row_;

  private:
    bool can_print(const std::string &s) const
    {
        if (s.size() <= 1)
        {
            return true;
        }
        for (size_t i = 1; i != s.size(); ++i)
        {
            if (Solution::ch2row_[std::tolower(s[i])] != Solution::ch2row_[std::tolower(s[i - 1])])
            {
                return false;
            }
        }
        return true;
    }

  public:
    vector<string> findWords(vector<string> &words)
    {
        std::vector<std::string> ret;
        ret.reserve(words.size());
        for (const auto &word : words)
        {
            if (can_print(word))
            {
                ret.push_back(word);
            }
        }
        return ret;
    }
};

std::unordered_map<char, uint32_t> Solution::ch2row_ = {
    {'q', 1}, {'w', 1}, {'e', 1}, {'r', 1}, {'t', 1}, {'y', 1}, {'u', 1}, {'i', 1}, {'o', 1},
    {'p', 1}, {'a', 2}, {'s', 2}, {'d', 2}, {'f', 2}, {'g', 2}, {'h', 2}, {'j', 2}, {'k', 2},
    {'l', 2}, {'z', 3}, {'x', 3}, {'c', 3}, {'v', 3}, {'b', 3}, {'n', 3}, {'m', 3}};
