#ifndef PRIMERCPP_SALES_DATA_H
#define PRIMERCPP_SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif //PRIMERCPP_SALES_DATA_H
