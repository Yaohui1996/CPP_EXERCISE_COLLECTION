#include "LC_COMMON_HEADER.h"
//* 66. 加一.cpp
//* https://leetcode.cn/problems/plus-one/description/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() == 1 && digits[0] == 0){
            return std::vector<int>{1};
        }
        std::vector<int> ret;
        ret.reserve(digits.size() + 1);
        ret.push_back(0);
        ret.insert(ret.end(),digits.begin(),digits.end());
        ret.back() += 1;
        for(int i = ret.size() - 1; i >= 0; --i){
            bool jin = ret[i] >= 10 ? true : false;
            if(jin){
                ret[i] -= 10;
                ret[i - 1] += 1;
            }
        }
        if(ret[0] == 0){
            return std::vector<int>(ret.begin()+1,ret.end());
        }
        return ret;
    }
};