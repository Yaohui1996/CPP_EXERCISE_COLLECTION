/**
 * @file 09-51.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-12-23
 *
 * @copyright Copyright (c) 2021
 *
 */

// 练习9.51：设计一个类，它有三个unsigned成员，分别表示年、月和日。
// 为其编写构造函数，接受一个表示日期的string参数。
// 你的构造函数应该能处理不同数据格式，
// 如January 1, 1900、1/1/1990、Jan 1 1900等。

#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class YaohuiDate {
public:
    YaohuiDate(string d) {
        if (d.find(',') != string::npos) {
            // January 1, 1900
            string::size_type i1 = 0;
            string::size_type i2 = 0;
            // find month
            while (d[i2] != ' ') {
                ++i2;
            }
            month_ = long_map_.at(d.substr(i1, i2 - i1));
            i1 = i2 + 1;
            i2 = i1;

            // find day
            while (d[i2] != ' ') {
                ++i2;
            }
            day_ = stoul(d.substr(i1, i2 - i1 - 1));
            i1 = i2 + 1;
            year_ = stoul(d.substr(i1, d.size() - i1));
        } else if (d.find('/') != string::npos) {
            // 1/1/1990
            vector<string> date_vec;
            stringstream ss;
            ss << d;
            string temp;
            while (getline(ss, temp, '/')) {
                date_vec.push_back(temp);
            }
            day_ = stoul(date_vec[0]);
            month_ = stoul(date_vec[1]);
            year_ = stoul(date_vec[2]);
        } else {
            // Jan 1 1900
            string::size_type i1 = 0;
            string::size_type i2 = 0;
            // find month
            while (d[i2] != ' ') {
                ++i2;
            }
            month_ = short_map_.at(d.substr(i1, i2 - i1));

            // find day
            i1 = i2 + 1;
            i2 = i1;
            while (d[i2] != ' ') {
                ++i2;
            }
            day_ = stoul(d.substr(i1, i2 - i1));

            // find year
            i1 = i2 + 1;
            year_ = stoul(d.substr(i1, d.size() - i1));
        }
    }

    void print() const {
        cout << "year: " << year_ << endl;
        cout << "month: " << month_ << endl;
        cout << "day: " << day_ << endl;
    }

private:
    unsigned year_ = 0;
    unsigned month_ = 0;
    unsigned day_ = 0;

    const unordered_map<string, unsigned> short_map_ = {
        {"Jan", 1}, {"Feb", 2},  {"Mar", 3},  {"Apr", 4},
        {"May", 5}, {"June", 6}, {"July", 7}, {"Aug", 8},
        {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}};

    const unordered_map<string, unsigned> long_map_ = {
        {"January", 1},   {"February", 2}, {"March", 3},     {"April", 4},
        {"May", 5},       {"June", 6},     {"July", 7},      {"August", 8},
        {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}};
};

int main() {
    YaohuiDate date_instance_1("January 1, 1900");
    date_instance_1.print();
    YaohuiDate date_instance_2("26/5/1990");
    date_instance_2.print();
    YaohuiDate date_instance_3("Feb 27 1900");
    date_instance_3.print();
    return 0;
}