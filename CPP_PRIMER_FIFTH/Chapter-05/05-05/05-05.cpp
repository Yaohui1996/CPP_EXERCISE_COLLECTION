#include <iostream>

using namespace std;

int main() {
  double grades = 68.8;
  if (grades == 100)
    cout << "A++" << endl;
  else if (grades < 60)
    cout << "F" << endl;
  else if (grades >= 60 && grades <= 69)
    cout << "D" << endl;
  else if (grades >= 70 && grades <= 79)
    cout << "C" << endl;
  else if (grades >= 80 && grades <= 89)
    cout << "B" << endl;
  else if (grades >= 90 && grades <= 99)
    cout << "A" << endl;
  return 0;
}