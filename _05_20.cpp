#include <iostream>
#include <string>

using namespace std;

int main() {
    string s0;
    string s1;
    while (cin >> s1) {
        if (s1 == s0) {
            break;
        } else {
            s0 = s1;
        }
    }
    if (cin.eof()) {
        cout << "没有重复的元素" << endl;
    } else {
        cout << s1 << "重复了2次" << endl;
    }


    return 0;
}