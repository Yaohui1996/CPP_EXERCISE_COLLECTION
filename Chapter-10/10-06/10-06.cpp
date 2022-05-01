/**
 * @file 10-06.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.6：编写程序，使用fill_n将一个序列中的int值都设置为0。

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    fill_n(back_inserter(v), 3, 1);
    for (const auto& i : v) {
        cout << i << endl;
    }

    return 0;
}