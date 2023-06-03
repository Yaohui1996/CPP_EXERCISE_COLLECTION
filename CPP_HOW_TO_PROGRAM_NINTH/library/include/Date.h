#ifndef CPP_HOW_TO_PROGRAM_NINTH_DATE_H
#define CPP_HOW_TO_PROGRAM_NINTH_DATE_H

#include <cstdint>
#include <iostream>
#include <string>

class Date {
private:
  int32_t month_;
  int32_t day_;
  int32_t year_;

public:
  Date(const int32_t month, const int32_t day, const int32_t year);
  //* set
  void set_month(const int32_t month);
  void set_day(const int32_t day);
  void set_year(const int32_t year);
  //* get
  int32_t get_month() const;
  int32_t get_day() const;
  int32_t get_year() const;
  //* show
  void display_date() const;
};

#endif // CPP_HOW_TO_PROGRAM_NINTH_DATE_H