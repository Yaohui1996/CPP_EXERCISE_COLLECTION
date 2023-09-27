#include "LC_COMMON_HEADER.h"
//* 67.二进制求和.cpp
//* https://leetcode.cn/problems/add-binary/

class Solution
{
  private:
    char ch_plus(const char ch1, const char ch2, bool &jin) const
    {
        char ret;
        if (ch1 == '0' && ch2 == '0')
        {
            ret = jin ? '1' : '0';
            jin = false;
        }
        else if (ch1 == '0' && ch2 == '1')
        {
            ret = jin ? '0' : '1';
            jin = jin ? true : false;
        }
        else if (ch1 == '1' && ch2 == '0')
        {
            ret = jin ? '0' : '1';
            jin = jin ? true : false;
        }
        else if (ch1 == '1' && ch2 == '1')
        {
            ret = jin ? '1' : '0';
            jin = true;
        }
        return ret;
    }

  public:
    string addBinary(string a, string b)
    {
        //* 构造等长数组
        const auto a_sz = a.size();
        const auto b_sz = b.size();
        if (a_sz > b_sz)
        {
            b.insert(b.begin(), a_sz - b_sz, '0');
        }
        else
        {
            a.insert(a.begin(), b_sz - a_sz, '0');
        }

        //* 做加法
        std::string ret;
        bool jin = false;
        for (int i = a.size() - 1; i >= 0; --i)
        {
            const char ch = ch_plus(a[i], b[i], jin);
            ret.push_back(ch);
        }
        if (jin)
        {
            ret.push_back('1');
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
};