#include "LC_COMMON_HEADER.h"
//* 88. 合并两个有序数组.cpp
//* https://leetcode.cn/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = m - 1;
        int i2 = n - 1;
        int curr = m + n - 1;
        while(i1 >= 0 && i2 >= 0){
            if(nums1[i1] > nums2[i2]){
                nums1[curr] = nums1[i1];
                --curr;
                --i1;
            }else{
                nums1[curr] = nums2[i2];
                --curr;
                --i2;
            }
        }
        while(i1 >= 0){
            nums1[curr] = nums1[i1];
                --curr;
                --i1;
        }
        while(i2 >= 0){
            nums1[curr] = nums2[i2];
                --curr;
                --i2;
        }
    }
};