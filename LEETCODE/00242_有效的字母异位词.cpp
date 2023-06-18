//* 242.有效的字母异位词.cpp
//* https://leetcode.cn/problems/valid-anagram/


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        std::vector<uint32_t> s_counter(26,0);
        std::vector<uint32_t> t_counter(26,0);
        for(size_t i = 0; i != s.size(); ++i){
            ++s_counter[s[i]-97];
            ++t_counter[t[i]-97];
        }
        for(size_t i = 0; i != s_counter.size(); ++i){
            if(s_counter[i] != t_counter[i]){
                return false;
            }
        }
        return true;

    }
};