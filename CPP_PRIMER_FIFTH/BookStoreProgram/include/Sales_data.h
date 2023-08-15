/**
 * @file Sales_data.h
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef YAOHUI_SALES_DATA_H
#define YAOHUI_SALES_DATA_H

#include <iostream>
#include <string>
namespace yaohui {

class Sales_data {
  friend std::istream &read(std::istream &is, Sales_data &item);
  friend std::ostream &print(const Sales_data &item, std::ostream &os);

public:
  Sales_data(std::istream &is);
  Sales_data(std::string book_id, unsigned int sold_cnt, double price);
  Sales_data(std::string book_id);
  Sales_data() = default;

  // 一个isbn成员函数，用于返回对象的ISBN编号
  std::string isbn() const;

  // 一个combine成员函数，用于将一个Sales_data对象加到另一个对象上
  Sales_data &combine(const Sales_data &rhs);

private:
  std::string book_id_;       // 表示ISBN编号
  unsigned int sold_cnt_ = 0; // 表示某本书的销量
  double revenue_ = 0.0;      // 表示这本书的总销售收入

private:
  double avg_price() const; // 返回售出书籍的平均价格
};

// 和类相关的非成员函数的声明

// 一个名为add的函数，执行两个Sales_data对象的加法
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

// 一个read函数，将数据从istream读入到Sales_data对象中
std::istream &read(std::istream &is, Sales_data &item);

// 一个print函数，将Sales_data对象的值输出到ostream
std::ostream &print(const Sales_data &item, std::ostream &os);

// 和类相关的非成员函数的定义

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0.0;
  is >> item.book_id_ >> item.sold_cnt_ >> price;
  item.revenue_ = price * item.sold_cnt_;
  return is;
}

std::ostream &print(const Sales_data &item, std::ostream &os) {
  os << item.isbn() << " " << item.sold_cnt_ << " " << item.revenue_ << " "
     << item.avg_price();
  return os;
}

// 成员函数的定义
Sales_data::Sales_data(std::istream &is) { read(is, *this); }
Sales_data::Sales_data(std::string book_id, unsigned int sold_cnt, double price)
    : book_id_(book_id), sold_cnt_(sold_cnt), revenue_(sold_cnt * price) {}

Sales_data::Sales_data(std::string book_id)
    : book_id_(book_id), sold_cnt_(0), revenue_(0.0) {}

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  this->sold_cnt_ += rhs.sold_cnt_;
  this->revenue_ += rhs.revenue_;
  return *this;
}

inline double Sales_data::avg_price() const {
  if (sold_cnt_) {
    return revenue_ / sold_cnt_;
  }
  return 0.0;
}

std::string Sales_data::isbn() const { return this->book_id_; }

} // namespace yaohui

#endif // YAOHUI_SALES_DATA_H