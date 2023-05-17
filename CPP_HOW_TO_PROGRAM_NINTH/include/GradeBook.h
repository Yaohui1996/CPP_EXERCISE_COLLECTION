#ifndef CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H
#define CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H

#include <iostream>
#include <string>

class GradeBook {
private:
  std::string courseName;

public:
  explicit GradeBook(const std::string &name);
  void displayMessage() const;
  void displayMessage(const std::string &courseName) const;
  void setCourseName(const std::string &name);
  const std::string &getCourseName() const;
};

#endif // CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H