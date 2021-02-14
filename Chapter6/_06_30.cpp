//
// Created by Yaohui Li on 2021/2/14.
//
#include <iostream>
#include <string>

using namespace std;

bool str_subrange(const string &str1, const string &str2) {
    if (str1.size() == str2.size())
        return str1 == str2;
    auto size = (str1.size() < str2.size()) ? str1.size() : str1.size();
    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return false;//此处已改正
    }
    return true;//此处已改正
}


int main() {

    return 0;
}
