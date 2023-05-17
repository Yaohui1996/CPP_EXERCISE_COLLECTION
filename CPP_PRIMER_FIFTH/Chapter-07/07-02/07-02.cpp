//
// Created by Yaohui Li on 2021/2/15.
//

#include <string>

using namespace std;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

  std::string isbn() const { return bookNo; };

  Sales_data &combine(const Sales_data &);
};

int main() { return 0; }

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}