/**
 * @file 09-33.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.33：在本节最后一个例子中，如果不将insert的结果赋予begin，将会发生什么？
// 编写程序，去掉此赋值语句，验证你的答案。
// 解答：迭代器会失效
// 09-33(10391,0x100a88580) malloc: *** error for object 0x60000302c1c0: pointer
// being freed was not allocated 09-33(10391,0x100a88580) malloc: *** set a
// breakpoint in malloc_error_break to debug zsh: abort

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {0, 1, 2, 3, 4, 5, 6};
    auto begin = v.begin();
    while (begin != v.end())
    {
        ++begin;
        begin = v.insert(begin, 42);
        // v.insert(begin, 42);
        ++begin;
    }

    for (int i : v)
        cout << i << " ";
    return 0;
}