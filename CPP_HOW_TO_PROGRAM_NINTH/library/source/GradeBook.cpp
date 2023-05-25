#include "GradeBook.h"
#include <iostream>

using namespace std;

GradeBook::GradeBook(const std::string &name) : courseName(name) {}

GradeBook::GradeBook(const std::string &course_name,
                     const std::string &teacher_name)
    : courseName(course_name), teacherName(teacher_name) {}

void GradeBook::displayMessage() const {
  cout << "Welcome to the Grade Book for " << courseName << "!"
       << "teacher is: " << teacherName << "." << endl;
}

void GradeBook::displayMessage(const string &courseName) const {
  cout << "Welcome to the grade book for " << courseName << "!" << endl;
}

void GradeBook::setCourseName(const std::string &name) { courseName = name; }

const std::string &GradeBook::getCourseName() const { return courseName; }

void GradeBook::setTeacherName(const std::string &name) { teacherName = name; }

const std::string &GradeBook::getTeacherName() const { return teacherName; }