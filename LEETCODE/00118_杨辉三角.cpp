#include "LC_COMMON_HEADER.h"
//* 118. 杨辉三角
//* https://leetcode.cn/problems/pascals-triangle/
class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ret;
    for (size_t i = 0; i != numRows; ++i) {
      // 第i行
      if (i == 0) {
        ret.push_back(vector<int>{1});
        continue;
      }
      vector<int> line(i + 1);
      for (size_t j = 0; j != i + 1; ++j) {
        if (j == 0 || j == i) {
          line[j] = 1;
          continue;
        } else {
          line[j] = ret[i - 1][j - 1] + ret[i - 1][j];
        }
      }
      ret.push_back(line);
    }
    return ret;
  }
};