//
// Created by Yaohui Li on 2021/2/20.
//


#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>


using std::istringstream;
using std::ostringstream;
using std::runtime_error;
using std::istream;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::cerr;

istream &hanshu(istream &is) {
    string buff;
    while (is >> buff) {
        cout << buff << endl;
    }
    is.clear();
    return is;
}

int main() {
    ostringstream out;
    out << "这是一串测试用的字符串。" << endl;
    istringstream in;
    in.str(out.str());
    hanshu(in);
    return 0;
}
