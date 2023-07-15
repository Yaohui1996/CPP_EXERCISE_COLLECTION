#include "LC_COMMON_HEADER.h"
//* 121. 买卖股票的最佳时机
//* https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_pro = 0;
        int min_mai = std::numeric_limits<int>::max();
        for (size_t i = 0; i != prices.size(); ++i) {
            if (prices[i] < min_mai) {
                min_mai = prices[i];
            } else {
                if (prices[i] - min_mai > max_pro) { max_pro = prices[i] - min_mai; }
            }
        }
        return max_pro;
    }
};