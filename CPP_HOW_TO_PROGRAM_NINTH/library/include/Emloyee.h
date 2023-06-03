#ifndef CPP_HOW_TO_PROGRAM_NINTH_EMLOYEE_H
#define CPP_HOW_TO_PROGRAM_NINTH_EMLOYEE_H

#include <cstdint>
#include <limits>
#include <string>

class Emloyee {
private:
  std::string first_name_;
  std::string last_name_;
  int32_t monthly_salary_;

public:
  Emloyee(const std::string &first_name, const std::string &last_name,
          const int32_t monthly_salary);
  //* set
  void set_first_name(const std::string &first_name);
  void set_last_name(const std::string &last_name);
  void set_monthly_salary(const int32_t monthly_salary);
  //* get
  const std::string &get_first_name() const;
  const std::string &get_last_name() const;
  int32_t get_monthly_salary() const;
};

#endif // CPP_HOW_TO_PROGRAM_NINTH_EMLOYEE_H