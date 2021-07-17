#include <iostream>

using namespace std;

int main() {
    double grades = 38.8;
    grades == 100 ? cout << "A++" << endl :
    grades >= 90 ? cout << "A" << endl :
    grades >= 80 ? cout << "B" << endl :
    grades >= 70 ? cout << "C" << endl :
    grades >= 60 ? cout << "D" << endl :
    cout << "F" << endl;
    return 0;
}