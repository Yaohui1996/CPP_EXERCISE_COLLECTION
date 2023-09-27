/**
 * @file 09-27.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.27：编写程序，查找并删除forward_list<int>中的奇数元素。

#include <forward_list>
#include <iostream>

using namespace std;

int main()
{
    forward_list<int> fl = {0, 1, 2, 3, 4, 5, 6};
    for (forward_list<int>::const_iterator prev = fl.cbefore_begin(), curr = fl.cbegin(); curr != fl.cend();)
    {
        if ((*curr) % 2 != 0)
        {
            curr = fl.erase_after(prev);
        }
        else
        {
            ++prev;
            ++curr;
        }
    }

    // print fl
    for (const auto &item : fl)
        cout << item << " ";

    return 0;
}