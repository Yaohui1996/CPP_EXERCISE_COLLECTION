#include "Emloyee.h"

Emloyee::Emloyee(const std::string &first_name, const std::string &last_name, const int32_t monthly_salary)
    : first_name_(first_name), last_name_(last_name), monthly_salary_(monthly_salary)
{
}

//* set
void Emloyee::set_first_name(const std::string &first_name)
{
    first_name_ = first_name;
}
void Emloyee::set_last_name(const std::string &last_name)
{
    last_name_ = last_name;
}
void Emloyee::set_monthly_salary(const int32_t monthly_salary)
{
    monthly_salary_ = (monthly_salary < 0) ? 0 : monthly_salary;
}
//* get
const std::string &Emloyee::get_first_name() const
{
    return first_name_;
}
const std::string &Emloyee::get_last_name() const
{
    return last_name_;
}
int32_t Emloyee::get_monthly_salary() const
{
    return monthly_salary_;
}