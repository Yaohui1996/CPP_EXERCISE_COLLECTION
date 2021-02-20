//
// Created by Yaohui Li on 2021/2/20.
//
#include <string>

using std::string;

struct Sales_data {
    string bookNo;
    unsigned units_sold;
    double revenue;
};

int main() {
    Sales_data hh = {"987-0590353403", 25, 15.99};
}