//
// Created by Yaohui Li on 2021/2/20.
//

#include <iostream>
#include <stdexcept>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::runtime_error;
using std::string;

istream &hanshu(istream &is)
{
    string buff;
    while (is >> buff, !is.eof())
    {
        if (is.bad())
        {
            throw runtime_error("IO流错误");
        }
        if (is.fail())
        {
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

int main()
{

    hanshu(cin);
    return 0;
}