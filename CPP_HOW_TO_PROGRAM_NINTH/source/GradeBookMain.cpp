#include <iostream>
#include <string>

#include "GradeBook.h"

using namespace std;

int main() {
  GradeBook my_grade_book("ct course name");
  my_grade_book.displayMessage();
  my_grade_book.displayMessage("fake course name");
  my_grade_book.setCourseName("new fake course name");
  my_grade_book.displayMessage();
  std::cout << my_grade_book.getCourseName() << std::endl;
  return 0;
}