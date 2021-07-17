//
// Created by Yaohui Li on 2021/2/14.
//
#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

int calSum(initializer_list<int> li);


int main() {
    cout << calSum({1, 2, 3, 4}) << endl;
    cout << calSum({1, 2, 3, 4, 5}) << endl;


    return 0;
}

int calSum(initializer_list<int> li) {
    int ret = 0;
    for (auto &i : li) {
        ret += i;
    }
    return ret;
}
