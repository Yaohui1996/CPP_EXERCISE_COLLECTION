//
// Created by yaohui on 2022/5/3.
//

// 练习10.20：标准库定义了一个名为count_if的算法。
// 类似find_if，此函数接受一对迭代器，表示一个输入范围，还接受一个谓词，会对输入范围中每个元素执行。
// count_if返回一个计数值，表示谓词有多少次为真。
// 使用count_if重写我们程序中统计有多少单词长度超过6的部分。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

size_t biggies(const vector<string>& v, string::size_type sz) {
    return std::count_if(v.begin(), v.end(), [=](const string& s) -> bool {
        return s.size() >= sz;
    });
}

int main() {
    vector<string> v = {"the",  "quick", "red",  "fox", "jumps",
                        "over", "the",   "slow", "red", "turtle"};
    cout << biggies(v, 5) << endl;
    return 0;
}