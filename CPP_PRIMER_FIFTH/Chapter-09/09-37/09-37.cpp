/**
 * @file 09-37.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.37：为什么list或array没有capacity成员函数？
// 解答：
// list是链表数据结构，可以在任意位置插入节点，且每个节点都记录了下一个（或前一个）元素的地址
// array是不可修改大小的数据结构，在创建后就不可改变大小

#include <iostream>

using namespace std;

int main()
{
    return 0;
}