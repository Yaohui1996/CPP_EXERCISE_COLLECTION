//
// Created by Yaohui Li on 2022/2/9.
//

// 练习10.13：标准库定义了名为partition的算法，它接受一个谓词，对容器内容进行划分，
// 使得谓词为true的值会排在容器的前半部分，而使谓词为false的值会排在后半部分。
// 算法返回一个迭代器，指向最后一个使谓词为true的元素之后的位置。
// 编写函数，接受一个string，返回一个bool值，指出string是否有5个或更多字符。
// 使用此函数划分words。打印出长度大于等于5的元素。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool more_than_four_char(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto end_iter = partition(v.begin(), v.end(), more_than_four_char);

    for (auto iter = v.begin(); iter != end_iter; ++iter)
    {
        cout << *iter << endl;
    }
    return 0;
}