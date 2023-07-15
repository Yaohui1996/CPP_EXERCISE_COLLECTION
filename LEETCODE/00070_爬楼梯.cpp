#include "LC_COMMON_HEADER.h"
//* 70. 爬楼梯
//* https://leetcode.cn/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (size_t i = 0; i != n + 1; ++i) {
            if (i <= 1) { continue; }
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};