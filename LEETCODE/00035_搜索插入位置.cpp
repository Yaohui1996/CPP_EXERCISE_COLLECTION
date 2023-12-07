#include "LC_COMMON_HEADER.h"
//* 35. 搜索插入位置
//* https://leetcode.cn/problems/search-insert-position/description/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        while(i <= j){
            const int mid = (j-i)/2 + i;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        return i;
    }
};
