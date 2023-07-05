#include "LC_COMMON_HEADER.h"
//* 383_赎金信.cpp
//* https://leetcode.cn/problems/ransom-note/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::unordered_map<char,int32_t> counter_map;
        for(const auto ch : magazine){
            ++counter_map[ch];
        }
        for(const auto ch : ransomNote){
            const auto finder = counter_map.find(ch);
            if(finder == counter_map.cend()){
                return false;
            }
            --(finder->second);
            if(finder->second < 0){
                return false;
            }
        }
        return true;
    }
};