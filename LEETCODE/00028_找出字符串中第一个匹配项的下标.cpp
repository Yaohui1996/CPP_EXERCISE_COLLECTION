#include "LC_COMMON_HEADER.h"
//* 28.找出字符串中第一个匹配项的下标
//* https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
class Solution {
private:
    bool is_equal(const std::string& s1,const std::string& s2,const size_t beg1, const size_t end1,const size_t beg2, const size_t end2)const{
        size_t i = beg1;
        size_t j = beg2;
        while(i != end1){
            if (s1[i] != s2[j]){
                return false;
            }else{
                ++i;
                ++j;
            }
        }
        return true;
    }
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()){
            return -1;
        }
        for(size_t i = 0; i != haystack.size() - needle.size() + 1; ++i){
            if(is_equal(haystack,needle,i,i+needle.size(),0,needle.size())){
                return i;
            }
        }
        return -1;
    }
};