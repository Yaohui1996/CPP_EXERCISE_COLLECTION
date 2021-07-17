//
// Created by Yaohui Li on 2021/2/14.
//
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
