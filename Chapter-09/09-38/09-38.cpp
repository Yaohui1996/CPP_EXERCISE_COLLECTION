/**
 * @file 09-38.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.38：编写程序，探究在你的标准库实现中，vector是如何增长的。

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i != 100; ++i) {
        cout << "v的size为: " << v.size() << "\n";
        cout << "v的capacity为: " << v.capacity() << "\n";
        v.push_back(i);
    }
    return 0;
}