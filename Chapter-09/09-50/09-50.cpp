/**
 * @file 09-50.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-23
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.50：编写程序处理一个vector<string>，其元素都表示整型值。
// 计算vector中所有元素之和。
// 修改程序，使之计算表示浮点值的string之和。

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> int_num = {"1", "2", "3", "4", "5"};
    vector<string> float_num = {"0.1", "0.2", "0.3", "0.4", "0.5"};

    int i_sum = 0;
    double d_sum = 0.0;

    for (auto& i : int_num) {
        i_sum += stoi(i);
    }

    for (auto& i : float_num) {
        d_sum += stod(i);
    }

    cout << i_sum << endl;
    cout << d_sum << endl;

    return 0;
}