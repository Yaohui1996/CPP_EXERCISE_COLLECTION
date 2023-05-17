#include "GradeBook.h"
#include <iostream>

using namespace std;

GradeBook::GradeBook(const std::string &name) : courseName(name) {}

void GradeBook::displayMessage() const {
  cout << "Welcome to the Grade Book for " << courseName << "!" << endl;
}

void GradeBook::displayMessage(const string &courseName) const {
  cout << "Welcome to the grade book for " << courseName << "!" << endl;
}

void GradeBook::setCourseName(const std::string &name) { courseName = name; }

const std::string &GradeBook::getCourseName() const { return courseName; }