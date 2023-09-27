/**
 * @file 09-29.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-01
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.29：假定vec包含25个元素，那么vec.resize（100）会做什么？如果接下来调用vec.resize（10）会做什么？
// 解答：vec.size()变为100，新增75个元素为0
// 接下来再调用vec.resize（10），则vec.size()变为10，元素值为vec原来的前10个元素值

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    for (vector<int>::size_type i = 0; i != 25; ++i)
        v.push_back(i);
    for (int item : v)
        cout << item << " "; // print v
    cout << "\n";

    v.resize(100);
    for (int item : v)
        cout << item << " "; // print v
    cout << "\n";

    v.resize(10);
    for (int item : v)
        cout << item << " "; // print v
    cout << "\n";

    return 0;
}