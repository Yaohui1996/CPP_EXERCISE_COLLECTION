/**
 * @file 09-31.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.31：第316页中删除偶数值元素并复制奇数值元素的程序不能用于list或forward_list。为什么？
// 修改程序，使之也能用于这些类型。

#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

void func(vector<int> &vi)
{
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if (*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            iter += 2;
        }
        else
        {
            iter = vi.erase(iter);
        }
    }
}

void func(list<int> &l)
{
    auto iter = l.begin();
    while (iter != l.end())
    {
        if (*iter % 2)
        {
            iter = l.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else
        {
            iter = l.erase(iter);
        }
    }
}

void func(forward_list<int> &fl)
{
    auto prev = fl.before_begin();
    auto curr = fl.begin();
    while (curr != fl.end())
    {
        if (*curr % 2)
        {
            fl.insert_after(prev, *curr);
            ++prev;
            ++prev;
            ++curr;
        }
        else
        {
            curr = fl.erase_after(prev);
        }
    }
}

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    func(v);
    for (int i : v)
        cout << i << " ";
    cout << "\n";

    list<int> l = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    func(l);
    for (int i : l)
        cout << i << " ";
    cout << "\n";

    forward_list<int> fl = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    func(fl);
    for (int i : fl)
        cout << i << " ";
    cout << "\n";

    return 0;
}
