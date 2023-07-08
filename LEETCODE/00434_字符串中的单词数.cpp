#include "LC_COMMON_HEADER.h"
//* 00434_字符串中的单词数.cpp
//* https://leetcode.cn/problems/number-of-segments-in-a-string/

class Solution {
public:
    int countSegments(string s) {
        std::stringstream ss(s);
        std::string word;
        int ret = 0;
        while(std::getline(ss,word,' ')){
            if (word != ""){
                 ++ret;
            }
           
        }
        return ret;
    }
};