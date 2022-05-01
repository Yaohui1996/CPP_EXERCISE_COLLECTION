/**
 * @file 10-03.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.3：用accumulate求一个vector<int>中的元素之和。

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout << accumulate(v.cbegin(), v.cend(), 0) << endl;

    return 0;
}