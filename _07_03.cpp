//
// Created by Yaohui Li on 2021/2/18.
//

#include <iostream>
#include <string>

using std::endl;
using std::cout;
using std::cin;
using std::cerr;

struct Sales_data {
    //成员函数
    std::string isbn() const { return this->bookNo; }//函数声明并定义
    // 默认this是一个常量指针
    // 因为有const修饰该成员函数，说明该函数是一个常量成员函数，不能修改该对象的数据成员
    // 所以这里的this是一个指向常量的常量指针

    Sales_data &combine(const Sales_data &);//函数声明
    double avg_price() const;//函数声明

    //数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
    // this是一个指向当前对象的常量指针
    // *this是对指针解引用，运算结果为当前对象
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}


int main() {
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> total.bookNo >> total.units_sold >> total.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                cout << total.bookNo << " " << total.units_sold << " " << total.avg_price() << endl;
                total = trans;
            }
        }
        cout << total.bookNo << total.units_sold << total.avg_price() << endl;
    } else {
        cerr << "No data?!" << endl;
    }

    return 0;
}

