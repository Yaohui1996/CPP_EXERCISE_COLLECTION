#include "Date.h"

using namespace std;

Date::Date(const int32_t month, const int32_t day, const int32_t year)
    : month_(month), day_(day), year_(year) {}
//* set
void Date::set_month(const int32_t month) {
  month_ = (month < 1 || month > 12) ? 1 : month;
}
void Date::set_day(const int32_t day) { day_ = day; }
void Date::set_year(const int32_t year) { year_ = year; }
//* get
int32_t Date::get_month() const { return month_; }
int32_t Date::get_day() const { return day_; }
int32_t Date::get_year() const { return year_; }
//* show
void Date::display_date() const {
  cout << year_ << "/" << month_ << "/" << day_ << endl;
}