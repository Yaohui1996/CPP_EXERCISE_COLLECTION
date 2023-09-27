#include "maximum.h"
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    int32_t int1, int2, int3;
    cout << "请输入3个整数: ";
    cin >> int1 >> int2 >> int3;
    cout << "最大的整数是: " << maximum(int1, int2, int3) << endl;

    double double1, double2, double3;
    cout << "请输入3个浮点数: ";
    cin >> double1 >> double2 >> double3;
    cout << "最大的浮点数是: " << maximum(double1, double2, double3) << endl;

    char char1, char2, char3;
    cout << "请输入3个char字符: ";
    cin >> char1 >> char2 >> char3;
    cout << "最大的char字符是: " << maximum(char1, char2, char3) << endl;

    return 0;
}