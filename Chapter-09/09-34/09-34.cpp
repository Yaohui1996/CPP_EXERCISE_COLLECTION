/**
 * @file 09-34.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.34：假定vi是一个保存int的容器，其中有偶数值也有奇数值，分析下面循环的行为，然后编写程序验证你的分析是否正确。
// iter = vi.begin();
// while (iter != vi.end())
//     if (*iter % 2)
//         iter = vi.insert(iter, *iter);
//     ++iter;

// 解答：遇到偶数陷入死循环


#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end())
        if (*iter % 2) 
            iter = vi.insert(iter, *iter);
        ++iter;
    return 0;
}