#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string ret;
    for (const char &x:s) {
        if (!ispunct(x))
            ret += x;
        else
            continue;
    }
    cout << ret << endl;

    return 0;
}