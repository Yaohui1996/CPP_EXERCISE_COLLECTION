#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string x;
    vector<string> vString;
    while (cin >> x) {
        if (x == "quit")
            break;
        vString.push_back(x);
    }
    for (const string &item : vString) {
        cout << item << endl;
    }
    return 0;
}