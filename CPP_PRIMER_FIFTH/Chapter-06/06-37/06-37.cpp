//
// Created by Yaohui Li on 2021/2/14.
//

#include <string>

using namespace std;

// 方法1
typedef string StringArray[10];

StringArray &hanshu1();

// 方法2
auto hanshu2() -> int (&)[10];

// 方法3
string arr[10];

decltype(arr) &hanshu3();

/*
 * 方法2最直观
 */

int main()
{
    return 0;
}
