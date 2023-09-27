/**
 * @file 10-08.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-29
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习10.8：本节提到过，标准库算法不会改变它们所操作的容器的大小。
// 为什么使用back_inserter不会使这一断言失效？

// 解答：因此，关键要理解：标准库算法从来不直接操作容器，它们只操作迭代器，从而间接访问容器。
// 能不能插入和删除元素，不在于算法，而在于传递给它们的迭代器是否具有这样的能力。

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    return 0;
}