#include "GradeBook.h"
#include <_types/_uint32_t.h>
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