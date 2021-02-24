//
// Created by Yaohui Li on 2021/2/22.
//

#include <list>
#include <string>
#include <iostream>

using namespace std;

int main() {
    string s;
    list<string> ls;
    while (cin >> s && s != "stop") {
        ls.push_back(s);
    }
    for (auto it = ls.cbegin(); it != ls.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}