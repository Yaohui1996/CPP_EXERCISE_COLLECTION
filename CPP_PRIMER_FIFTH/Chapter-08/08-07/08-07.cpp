//
// Created by Yaohui Li on 2021/2/20.
//

#include <fstream>
#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::string;

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char *argv[])
{
    ifstream in;
    in.open(argv[1], ios::in);
    ofstream out;
    out.open(argv[2], ios::out);
    if (in)
    {
        Sales_data total;
        if (in >> total.bookNo >> total.units_sold >> total.revenue)
        {
            Sales_data trans;
            while (in >> trans.bookNo >> trans.units_sold >> trans.revenue)
            {
                if (total.bookNo == trans.bookNo)
                {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue;
                }
                else
                {
                    out << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                    cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                    total = trans;
                }
            }
        }
        out << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cerr << "打开文件失败！" << endl;
        return -1;
    }
    return 0;
}