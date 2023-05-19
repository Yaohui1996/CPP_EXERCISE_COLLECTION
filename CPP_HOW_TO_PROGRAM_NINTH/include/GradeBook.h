#ifndef CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H
#define CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H

#include <iostream>
#include <string>

class GradeBook {
private:
  std::string courseName;
  std::string teacherName;

public:
  explicit GradeBook(const std::string &name);
  GradeBook(const std::string &course_name, const std::string &teacher_name);
  void displayMessage() const;
  void displayMessage(const std::string &courseName) const;
  void setCourseName(const std::string &name);
  const std::string &getCourseName() const;
  void setTeacherName(const std::string &name);
  const std::string &getTeacherName() const;
};

#endif // CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H