//
// Created by Yaohui Li on 2021/2/21.
//

#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main() {
    list<char *> l1{"haha", "xixi", "hehe"};
    vector<string> v1(l1.begin(), l1.end());
    for (const auto &i : v1) {
        cout << i << endl;
    }

    return 0;
}