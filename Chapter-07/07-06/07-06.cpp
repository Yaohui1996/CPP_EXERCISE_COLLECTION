//
// Created by Yaohui Li on 2021/2/18.
//
#include <iostream>
#include <string>

using std::iostream;
using std::string;

struct Sales_data {
  // 成员函数
  string isbn() const { return this->bookNo; } // 函数声明并定义
  // 默认this是一个常量指针
  // 因为有const修饰该成员函数，说明该函数是一个常量成员函数，不能修改该对象的数据成员
  // 所以这里的this是一个指向常量的常量指针

  Sales_data &combine(const Sales_data &); // 函数声明
  double avg_price() const;                // 函数声明

  // 数据成员
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

// 成员函数在类外部定义
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

// 非成员函数声明
Sales_data add(const Sales_data &, const Sales_data &);  // 函数声明
std::ostream &print(std::ostream &, const Sales_data &); // 函数声明
std::istream &read(std::istream &, Sales_data &);        // 函数声明

// 非成员函数在类外部定义
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

int main() { return 0; }
