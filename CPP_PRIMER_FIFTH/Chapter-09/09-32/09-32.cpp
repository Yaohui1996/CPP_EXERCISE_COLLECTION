/**
 * @file 09-32.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-03
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.32：在第316页的程序中，向下面语句这样调用insert是否合法？如果不合法，为什么？
// iter = vi.insert(iter, *iter++);

// 解答：合法。++优先级高于*，表达式*iter++的值为*iter。
// 虽然表达式中的iter现在为后一个位置，但是第一个参数iter仍然是原来的位置，因此插入元素的位置不变。
// 返回插入元素的位置，赋值给iter，符合程序逻辑。
// 虽然最终结果符合期望，但是程序多进行了一步没有用的++操作，浪费了计算资源

int main()
{
    return 0;
}