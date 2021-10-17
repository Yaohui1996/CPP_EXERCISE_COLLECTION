//
// Created by Yaohui Li on 2021/2/20.
//

#include <iostream>
#include <string>
#include <stdexcept>

using std::runtime_error;
using std::istream;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::cerr;

istream &hanshu(istream &is) {
    string buff;
    while (is >> buff, !is.eof()) {
        if (is.bad()) {
            throw runtime_error("IO流错误");
        }
        if (is.fail()) {
            cerr << "数据错误，请重试" << endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        cout << buff << endl;
    }
    is.clear();
    return is;
}

int main() {

    return 0;
}