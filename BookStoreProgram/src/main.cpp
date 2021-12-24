/**
 * @file main.cpp
 * @author yaohui.li (1210792617@qq.com)
 * @brief
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

#include "Person.h"
#include "Sales_data.h"
#include "Window_mgr.h"
#include "Screen.h"

using namespace std;
using namespace yaohui;

int main() {
    Sales_data item0(cin);
    Sales_data item1("0-201-78345-x", 3, 20.00);
    Sales_data item2("0-201-78345-x");
    Sales_data item3;
    return 0;
}
