/**
 * @file 09-40.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-10
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.40：如果上一题中的程序读入了256个词，在resize之后容器的capacity可能是多少？
// 如果读入了512个、1000个或1048个词呢？
// vector<string> svec;
// svec.reserve(1024);
// string word;
// while (cin >> word)
//     svec.push_back(word);
// svec.resize(svec.size() + svec.size() / 2);

// 解答：
// 读入256：1024
// 读入512：1024
// 读入1000：2048
// 读入1048：2048

#include <iostream>

using namespace std;

int main()
{
    return 0;
}