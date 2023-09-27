#include "Invoice.h"

Invoice::Invoice(const std::string &code, const std::string &description, const int32_t count, const int32_t price)
    : code_(code), description_(description)
{
    count_ = count < 0 ? 0 : count;
    price_ = price < 0 ? 0 : price;
}
const std::string &Invoice::get_code() const
{
    return code_;
}
const std::string &Invoice::get_description() const
{
    return description_;
}
int32_t Invoice::get_count() const
{
    return count_;
}
int32_t Invoice::get_price() const
{
    return price_;
}
void Invoice::set_code(const std::string &code)
{
    code_ = code;
}
void Invoice::set_description(const std::string &description)
{
    description_ = description;
}
void Invoice::set_count(const int32_t count)
{
    count_ = count < 0 ? 0 : count;
}
void Invoice::set_price(const int32_t price)
{
    price_ = price < 0 ? 0 : price;
}
int32_t Invoice::get_invoice_amount() const
{
    return count_ * price_;
}