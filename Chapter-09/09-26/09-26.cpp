/**
 * @file 09-26.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.26：使用下面代码定义的ia，将ia拷贝到一个vector和一个list中。使用单迭代器版本的erase从list中删除奇数元素，从vector中删除偶数元素。
// int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(begin(ia), end(ia));
    list<int> l(begin(ia), end(ia));

    // print v
    for (const auto& item : v) {
        cout << item << " ";
    }
    cout << "\n";
    // print l
    for (const auto& item : l) {
        cout << item << " ";
    }
    cout << "\n";

    for (auto it = l.begin(); it != l.end();) {
        if ((*it) % 2 != 0) {
            it = l.erase(it);
        } else {
            ++it;
        }
    }
    for (auto it = v.begin(); it != v.end();) {
        if ((*it) % 2 == 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }

    // print v
    for (const auto& item : v) {
        cout << item << " ";
    }
    cout << "\n";
    // print l
    for (const auto& item : l) {
        cout << item << " ";
    }
    cout << "\n";

    return 0;
}
