/*
 * @Author: Yaohui Li
 * @Date: 2021-07-15 20:13:28
 * @LastEditTime: 2021-07-17 13:28:20
 * @LastEditors: Yaohui Li
 * @Description: Edited by VS Code
 * @FilePath: /CPP_Primer_5th_Exercise/factMain.cpp
 * 天地有正气
 * 杂然赋流形
 * 
 */
#include <iostream>
#include "Chapter6.h"

using namespace std;
int factMain() {
    cout << "Please input n" << endl;
    int n;
    cin >> n;
    int ret = 1;
    for (int i = 1; i <= n; ++i) {
        ret *= i;
    }
    return ret;
}
