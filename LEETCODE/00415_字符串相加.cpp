#include "LC_COMMON_HEADER.h"
//* 00415_字符串相加.cpp
//* https://leetcode.cn/problems/add-strings/

class Solution {
public:
  string addStrings(string num1, string num2) {
    std::reverse(num1.begin(), num1.end());
    std::reverse(num2.begin(), num2.end());
    size_t i = 0;
    size_t j = 0;
    bool jin = false;
    std::string ret;
    while (i != num1.size() && j != num2.size()) {
      // std::cout << "num1[i]="<<num1[i]<<std::endl;
      // std::cout << "num2[j]="<<num2[j]<<std::endl;
      const int int_1 = (int)num1[i] - 48;
      const int int_2 = (int)num2[j] - 48;
      // std::cout << "int_1="<<int_1<<std::endl;
      // std::cout << "int_2="<<int_2<<std::endl;
      if (jin) {
        const auto sum = int_1 + int_2 + 1;
        if (sum >= 10) {
          jin = true;
          ret.push_back((char)(sum % 10 + 48));
        } else {
          jin = false;
          ret.push_back((char)(sum + 48));
        }
      } else {
        const auto sum = int_1 + int_2;
        if (sum >= 10) {
          jin = true;
          ret.push_back((char)(sum % 10 + 48));
        } else {
          jin = false;
          ret.push_back((char)(sum + 48));
        }
      }
      ++i;
      ++j;
    }
    while (i != num1.size()) {
      const int int_1 = (int)num1[i] - 48;
      if (jin) {
        const auto sum = int_1 + 1;
        if (sum >= 10) {
          jin = true;
          ret.push_back((char)(sum % 10 + 48));
        } else {
          jin = false;
          ret.push_back((char)(sum + 48));
        }
      } else {
        const auto sum = int_1;
        if (sum >= 10) {
          jin = true;
          ret.push_back((char)(sum % 10 + 48));
        } else {
          jin = false;
          ret.push_back((char)(sum + 48));
        }
      }
      ++i;
    }

    while (j != num2.size()) {
      const int int_2 = (int)num2[j] - 48;
      if (jin) {
        const auto sum = int_2 + 1;
        if (sum >= 10) {
          jin = true;
          ret.push_back((char)(sum % 10 + 48));
        } else {
          jin = false;
          ret.push_back((char)(sum + 48));
        }
      } else {
        const auto sum = int_2;
        if (sum >= 10) {
          jin = true;
          ret.push_back((char)(sum % 10 + 48));
        } else {
          jin = false;
          ret.push_back((char)(sum + 48));
        }
      }
      ++j;
    }

    if (jin) {
      ret.push_back('1');
    }
    std::reverse(ret.begin(), ret.end());
    return ret;
  }
};