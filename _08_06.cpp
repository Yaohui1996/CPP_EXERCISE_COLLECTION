//
// Created by Yaohui Li on 2021/2/20.
//


#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::ifstream;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::ios;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char *argv[]) {
    ifstream in;
    in.open(argv[1], ios::in);
    if (in) {
        Sales_data total;
        if (in >> total.bookNo >> total.units_sold >> total.revenue) {
            Sales_data trans;
            while (in >> trans.bookNo >> trans.units_sold >> trans.revenue) {
                if (total.bookNo == trans.bookNo) {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue;
                } else {
                    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                    total = trans;
                }
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        cerr << "打开文件失败！" << endl;
        return -1;
    }
    return 0;
}