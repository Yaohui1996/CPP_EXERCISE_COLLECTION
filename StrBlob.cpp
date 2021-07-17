/*
 * @Author: Yaohui Li
 * @Date: 2021-07-15 20:13:28
 * @LastEditTime: 2021-07-17 00:16:44
 * @LastEditors: Yaohui Li
 * @Description: Edited by VS Code
 * @FilePath: /CPP_Primer_5th_Exercise/Chapter12/StrBlob.cpp
 * 天地有正气
 * 杂然赋流形
 * 
 */
#include "StrBlob.h"
#include <vector>
#include <string>
#include <memory>

using std::initializer_list;
using std::make_shared;
using std::out_of_range;
using std::string;
using std::vector;

StrBlob::StrBlob() : data(make_shared<vector<string>>()) {}
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i, const std::string &msg) const
{
    if (i >= data->size())
        throw out_of_range(msg);
}

std::string &StrBlob::front()
{
    check(0, "front on empty StrBlob.");
    return data->front();
}
std::string &StrBlob::back()
{
    check(0, "back on empty StrBlob.");
    return data->back();
}

void StrBlob::pop_back()
{
    check(0, "pop_back on empty StrBlob.");
    data->pop_back();
}
