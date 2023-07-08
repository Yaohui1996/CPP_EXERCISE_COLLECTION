
#include "LC_COMMON_HEADER.h"
//* 00412_FizzBuzz.cpp
//* https://leetcode.cn/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<std::string> ret(n);
        for(int index = 0; index < n; ++index){
            const auto i = index + 1;
            if ( i % 3 == 0 && i % 5 == 0){
                ret[i-1] = "FizzBuzz";
            }else{
                if (i % 3 == 0){
                    ret[i-1] = "Fizz";
                }else if(i % 5 == 0){
                    ret[i-1] = "Buzz";
                }else{
                    ret[i-1] = std::to_string(i);
                }
            }
        }
        return ret;
    }
};