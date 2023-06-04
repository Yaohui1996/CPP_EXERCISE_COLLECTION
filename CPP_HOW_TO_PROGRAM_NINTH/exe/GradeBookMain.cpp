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

  GradeBook new_grade_book("ct course name", "teacher name");
  new_grade_book.displayMessage();

  new_grade_book.determineClassAverageV2();
  new_grade_book.determineClassAverage();

  return 0;
}