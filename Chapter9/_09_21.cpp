//
// Created by Yaohui Li on 2021/2/22.
//

#include <vector>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    vector<string> vec;
    auto iter0 = vec.begin();
    string word0;
    while (cin >> word0) {
        iter0 = vec.insert(iter0, word0);
    }

    list<string> lst;
    auto iter = lst.begin();
    string word;
    while (cin >> word) {
        iter = lst.insert(iter, word);
    }
    return 0;
}