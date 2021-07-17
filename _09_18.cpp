//
// Created by Yaohui Li on 2021/2/22.
//

#include <deque>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string s;
    deque<string> ds;
    while (cin >> s && s != "stop") {
        ds.push_back(s);
    }
    for (auto it = ds.cbegin(); it != ds.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}