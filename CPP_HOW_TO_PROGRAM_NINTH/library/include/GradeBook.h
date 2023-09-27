#ifndef CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H
#define CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H

#include <array>
#include <iostream>
#include <string>

class GradeBook
{
  public:
    static const size_t students = 10;

  private:
    std::string courseName;
    std::string teacherName;
    uint32_t aCount; // count of A grade
    uint32_t bCount; // count of B grade
    uint32_t cCount; // count of C grade
    uint32_t dCount; // count of D grade
    uint32_t fCount; // count of F grade
    int32_t maximumGrade;
    std::array<uint32_t, students> grades;

  public:
    explicit GradeBook(const std::string &name);
    GradeBook(const std::string &course_name, const std::string &teacher_name);
    GradeBook(const std::string &course_name, const std::array<uint32_t, students> &grade_arr);
    void displayMessage() const;
    void displayMessage(const std::string &courseName) const;
    void setCourseName(const std::string &name);
    const std::string &getCourseName() const;
    void setTeacherName(const std::string &name);
    const std::string &getTeacherName() const;
    void determineClassAverage() const;
    void determineClassAverageV2() const;
    void inputGrades();
    void displayGradeReport() const;
    int32_t maximum(int32_t, int32_t, int32_t) const;
    void inputGradesV2();
    void processGrades() const;
    uint32_t getMinimum() const;
    uint32_t getMaximum() const;
    double getAverage() const;
    void outputBarChart() const;
    void outputGrades() const;
};

#endif // CPP_HOW_TO_PROGRAM_NINTH_GRADE_BOOK_H