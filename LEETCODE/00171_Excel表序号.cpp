#include "LC_COMMON_HEADER.h"
//* 171.Excel表序号.cpp
//* https://leetcode.cn/problems/excel-sheet-column-number/


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ret = 0;
        for(int i = columnTitle.size() - 1; i >= 0; --i){
            ret += ((int)columnTitle[i] - 64) * pow(26, columnTitle.size() - 1 - i);
        }
        return ret;
    }
};
