#include "LC_COMMON_HEADER.h"
//* 14.最长公共前缀.cpp
//* https://leetcode.cn/problems/longest-common-prefix/



class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        size_t max_len = 0;
        for(size_t i = 0; i != strs.size(); ++i){
            const auto& s = strs[i];
            if(s.size() > max_len){
                max_len = s.size();
            }
        }

        size_t i = 0;
        for(; i != max_len; ++i){
            char curr = ' ';
            for(size_t j = 0; j != strs.size(); ++j){
                const auto& s = strs[j];
                if(j == 0){
                    curr = s[i];
                    continue;
                }
                if(s[i] != curr){
                    return s.substr(0,i);
                }
            }
        }
        if(i == max_len){
            return strs[0];
        }

        return "";
    }
};