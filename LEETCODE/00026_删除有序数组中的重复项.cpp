#include "LC_COMMON_HEADER.h"
//* 26.删除有序数组中的重复项.cpp
//* https://leetcode.cn/problems/remove-duplicates-from-sorted-array/description/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::unordered_set<int> s;
        auto iter = nums.begin();
        while(iter != nums.end()){
            if(s.find(*iter) == s.cend()){
                s.insert(*iter);
                ++iter;
            }else{
                iter = nums.erase(iter);
            }
        }
        return s.size();
    }
};

class Solution2 {
public:
    int removeDuplicates(vector<int>& nums) {
        auto iter1 = nums.begin();
        auto iter2 = nums.begin();
        while(iter2 != nums.end()){
            if(*iter2 == *iter1){
                ++iter2;
            }else{
                ++iter1;
                *iter1 = *iter2;
                ++iter2;
            }
        }
        return iter1 - nums.begin() + 1;
    }
};