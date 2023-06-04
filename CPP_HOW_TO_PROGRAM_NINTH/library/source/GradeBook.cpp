#include "GradeBook.h"
#include <cstdio>
#include <iostream>

using namespace std;

GradeBook::GradeBook(const std::string &name)
    : courseName(name), aCount(0), bCount(0), cCount(0), dCount(0), fCount(0) {}

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

void GradeBook::determineClassAverage() const {
  uint32_t sum_grade = 0; // 总成绩
  cout << "请输入人数: ";
  uint32_t person_cnt = 0;
  cin >> person_cnt;
  for (uint32_t i = 0; i != person_cnt; ++i) {
    cout << "请输入第" << i + 1 << "个同学的成绩: ";
    uint32_t tmp_grade = 0;
    cin >> tmp_grade;
    sum_grade += tmp_grade;
  }
  cout << "成绩之和为: " << sum_grade << endl;
  cout << "平均成绩为: " << sum_grade / person_cnt << endl;
}

void GradeBook::determineClassAverageV2() const {
  uint32_t person_cnt = 0;  // 记录人数
  uint32_t sum_grade = 0;   // 总成绩
  uint32_t input_grade = 0; // 每次输入的成绩
  cout << "请输入第" << person_cnt + 1 << "个同学的成绩, 输入-1表示终止: ";
  cin >> input_grade;
  while (input_grade != -1) {
    ++person_cnt;
    sum_grade += input_grade;
    cout << "请输入第" << person_cnt + 1 << "个同学的成绩, 输入-1表示终止: ";
    cin >> input_grade;
  }
  cout << "人数为: " << person_cnt << endl;
  cout << "成绩之和为: " << sum_grade << endl;
  cout << "平均成绩为: " << sum_grade / person_cnt << endl;
}

void GradeBook::inputGrades() {
  cout << "请输入成绩等级: ";
  int32_t grade;
  while ((grade = cin.get()) != EOF) {
    switch (grade) {
    case 'A':
    case 'a':
      ++aCount;
      break;
    case 'B':
    case 'b':
      ++bCount;
      break;
    case 'C':
    case 'c':
      ++cCount;
      break;
    case 'D':
    case 'd':
      ++dCount;
      break;
    case 'F':
    case 'f':
      ++fCount;
      break;
    case '\t':
    case '\n':
    case ' ':
      break;
    default:
      cout << "请输入合法的等级!" << endl;
      break;
    } // end switch
    cout << "请继续输入成绩等级: ";
  }   // end while
} // end function

void GradeBook::displayGradeReport() const {
  cout << "\n\n各个等级的人数: "
       << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
       << "\nD: " << dCount << "\nF: " << fCount << endl;
}