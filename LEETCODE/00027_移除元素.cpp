#include "LC_COMMON_HEADER.h"
//* 27.移除元素.cpp
//* https://leetcode.cn/problems/remove-element/description/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto iter1 = nums.begin();
        auto iter2 = nums.begin();
        while(iter2 != nums.end()){
            if(*iter2 == val){
                ++iter2;
            }else{
                *iter1 = *iter2;
                ++iter1;
                ++iter2;
            }
        }
        return iter1 - nums.begin();
    }
};