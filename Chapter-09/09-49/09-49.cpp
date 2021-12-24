/**
 * @file 09-49.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-22
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.49：如果一个字母延伸到中线之上，如d或f，则称其有上出头部分（ascender）。
// 如果一个字母延伸到中线之下，如p或g，则称其有下出头部分（descender）。
// 编写程序，读入一个单词文件，输出最长的既不包含上出头部分，也不包含下出头部分的单词。

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    const string ade = "bdfghjklpqty";

    string result = "";

    ifstream in_file(argv[1], ios::in);
    string word;
    while (in_file >> word) {
        if (word.find_first_of(ade) == string::npos &&
            word.size() > result.size()) {
            result = word;
        }
    }
    cout << "最长的既不包含上出头部分，也不包含下出头部分的单词为: " << result
         << endl;
    cout << "其长度为" << result.size() << endl;
    return 0;
}