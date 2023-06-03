#include <iostream>
#include <string>

#include "Emloyee.h"

using namespace std;

int main() {
  Emloyee emloyee1("嘻嘻", "张", 20000);
  Emloyee emloyee2("缸子", "王", 36000);
  cout << emloyee1.get_monthly_salary() << endl;
  cout << emloyee2.get_monthly_salary() << endl;
  emloyee1.set_monthly_salary(emloyee1.get_monthly_salary() * 1.1);
  emloyee2.set_monthly_salary(emloyee2.get_monthly_salary() * 1.1);
  cout << emloyee1.get_monthly_salary() << endl;
  cout << emloyee2.get_monthly_salary() << endl;
  return 0;
}