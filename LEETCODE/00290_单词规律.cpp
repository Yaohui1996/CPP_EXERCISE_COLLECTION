#include "LC_COMMON_HEADER.h"
//* 290.单词规律.cpp
//* https://leetcode.cn/problems/word-pattern/

class Solution {
private:
  void split_str(const std::string &s, std::vector<std::string> &ret) const {
    std::stringstream ss(s);
    std::string tmp_s;
    while (std::getline(ss, tmp_s, ' ')) {
      ret.push_back(tmp_s);
    }
  }

public:
  bool wordPattern(string pattern, string s) {
    std::vector<std::string> splited_s;
    this->split_str(s, splited_s);
    if (pattern.size() != splited_s.size()) {
      return false;
    }
    std::unordered_map<char, std::string> char2str;
    std::unordered_map<std::string, char> str2char;
    for (size_t i = 0; i != pattern.size(); ++i) {
      const char ch = pattern[i];
      const auto &word = splited_s[i];
      const auto finder1 = char2str.find(ch);
      const auto finder2 = str2char.find(word);
      if (finder1 == char2str.cend() && finder2 == str2char.cend()) {
        char2str.insert({ch, word});
        str2char.insert({word, ch});
      } else {
        if (finder1 != char2str.cend() && finder1->second != word) {
          return false;
        }
        if (finder2 != str2char.cend() && finder2->second != ch) {
          return false;
        }
      }
    }
    return true;
  }
};
