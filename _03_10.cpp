/*
 * @Author: Yaohui Li
 * @Date: 2021-07-15 20:13:28
 * @LastEditTime: 2021-07-17 13:22:54
 * @LastEditors: Yaohui Li
 * @Description: Edited by VS Code
 * @FilePath: /CPP_Primer_5th_Exercise/_03_10.cpp
 * 天地有正气
 * 杂然赋流形
 * 
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ret;
    for (const char &x : s)
    {
        if (!ispunct(x))
            ret += x;
        else
            continue;
    }
    cout << ret << endl;

    return 0;
}