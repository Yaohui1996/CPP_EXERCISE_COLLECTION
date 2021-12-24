/**
 * @file 09-45.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-21
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.45：编写一个函数，接受一个表示名字的string参数和两个分别表示前缀（如"Mr."或"Ms."）和后缀（如"Jr."或"III"）的字符串。
// 使用迭代器及insert和append函数将前缀和后缀添加到给定的名字中，将生成的新string返回。

#include <iostream>
#include <string>

using namespace std;

string func(string name, string front, string back) {
    name.insert(name.begin(), front.begin(), front.end());
    name.append(back);
    return name;
}

int main() {
    string name = "Jack";
    cout << name << endl;
    name = func(name, "Mr.", "III");
    cout << name << endl;
    return 0;
}