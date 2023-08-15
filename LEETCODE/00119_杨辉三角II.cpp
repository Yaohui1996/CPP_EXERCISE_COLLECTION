#include "LC_COMMON_HEADER.h"
//* 119. 杨辉三角 II
//* https://leetcode.cn/problems/pascals-triangle-ii/
class Solution {
public:
  vector<int> getRow(int rowIndex) {
    vector<vector<int>> tr(rowIndex + 1);
    for (size_t i = 0; i != tr.size(); ++i) {
      if (i == 0) {
        tr[i] = vector<int>{1};
        continue;
      }
      tr[i].resize(i + 1);
      auto &line = tr[i];
      for (size_t j = 0; j != line.size(); ++j) {
        if (j == 0 || j == line.size() - 1) {
          line[j] = 1;
          continue;
        }
        line[j] = tr[i - 1][j - 1] + tr[i - 1][j];
      }
    }
    return tr[rowIndex];
  }
};