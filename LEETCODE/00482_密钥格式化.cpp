#include "LC_COMMON_HEADER.h"
//* 00482_密钥格式化.cpp
//* https://leetcode.cn/problems/license-key-formatting/


class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        std::string clean_s;
        clean_s.reserve(s.size());
        for(const char ch : s){
            if(ch == '-'){
                continue;
            }
            clean_s.push_back(std::toupper(ch));
        }
        const size_t a = clean_s.size() / k;
        const size_t b = clean_s.size() % k;
        std::string ret;
        ret.reserve(s.size());
        if ( b == 0){
            if(a <= 1){
                return  clean_s;
            }else{
                for(size_t i = 0; i != a; ++i){
                    ret.insert(ret.end(),clean_s.cbegin() + k*i,clean_s.cbegin() + k*(i+1));
                    if(i != a - 1){
                        ret.push_back('-');
                    }
                }
            }
        }else{
            if(a == 0){
                return  clean_s;
            }else{
                ret.insert(ret.end(),clean_s.cbegin(),clean_s.cbegin() + b);
                for(size_t i = 0; i != a; ++i){
                    ret.push_back('-');
                    ret.insert(ret.end(),clean_s.cbegin() + b + k*i,clean_s.cbegin()  + b + k*(i+1));
                }
            }
        }
        return ret;
    }
};