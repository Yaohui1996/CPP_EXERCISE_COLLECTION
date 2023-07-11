#include "LC_COMMON_HEADER.h"
//* 00551_学生出勤记录_I.cpp
//* https://leetcode.cn/problems/student-attendance-record-i/

class Solution {
public:
    bool checkRecord(string s) {
        uint32_t A_counter = 0;
        uint32_t L_counter = 0;
        for(size_t i = 0; i != s.size(); ++i){
            if ( i == 0 ){
                if(s[i] == 'L'){
                    ++L_counter;
                }else if(s[i] == 'A'){
                    ++A_counter;
                }
                continue;
            }
            if (s[i] == 'L'){
                if (s[i-1] == 'L'){
                    ++L_counter;
                }else{
                    L_counter = 1;
                }
            }else{
                L_counter = 0;
                if(s[i] == 'A'){
                    ++A_counter;
                }
            }
            if (L_counter >= 3){
                return false;
            }
        }
        if (A_counter >= 2){
            return false;
        }
        return true;
    }
};