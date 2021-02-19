//
// Created by Yaohui Li on 2021/2/19.
//

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;
using std::endl;
using std::cout;
using std::cin;
using std::cerr;

//类的声明
struct Sales_data;

//非成员函数声明
Sales_data add(const Sales_data &, const Sales_data &);//函数声明
std::ostream &print(std::ostream &, const Sales_data &);//函数声明
std::istream &read(std::istream &, Sales_data &);//函数声明


//类的定义
struct Sales_data {
    //构造函数
    //Sales_data() = default;//默认构造函数

    Sales_data(const string &s) : bookNo(s) {}//声明并定义构造函数

    //Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(n * p) {}//声明并定义构造函数

    Sales_data(const string &s, unsigned n, double p) : bookNo(""), units_sold(0), revenue(0.0) {}

    Sales_data(istream &is) {
        read(is, *this);
    }

    //成员函数
    string isbn() const { return this->bookNo; }//函数声明并定义
    // 默认this是一个常量指针
    // 因为有const修饰该成员函数，说明该函数是一个常量成员函数，不能修改该对象的数据成员
    // 所以这里的this是一个指向常量的常量指针

    Sales_data &combine(const Sales_data &);//函数声明
    double avg_price() const;//函数声明

    //数据成员
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


//成员函数在类外部定义
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
    // this是一个指向当前对象的常量指针
    // *this是对指针解引用，运算结果为当前对象
}

inline double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

//非成员函数在类外部定义
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.avg_price();
    return os;
}

std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

int main() {
    Sales_data obj1("无效字符串参数", 1, 1.1);
    Sales_data obj2("红玫瑰与白玫瑰");
    Sales_data obj3("撒哈拉的故事", 3, 26.99);
    Sales_data obj4(cin);
    Sales_data obj5("无效字符串参数", 1, 1.1);

    cout << obj1.isbn() << " " << obj1.units_sold << " " << obj1.revenue << " " << obj1.avg_price() << endl;
    cout << obj2.isbn() << " " << obj2.units_sold << " " << obj2.revenue << " " << obj2.avg_price() << endl;
    cout << obj3.isbn() << " " << obj3.units_sold << " " << obj3.revenue << " " << obj3.avg_price() << endl;
    cout << obj4.isbn() << " " << obj4.units_sold << " " << obj4.revenue << " " << obj4.avg_price() << endl;
    cout << obj5.isbn() << " " << obj5.units_sold << " " << obj5.revenue << " " << obj5.avg_price() << endl;
    return 0;
}

