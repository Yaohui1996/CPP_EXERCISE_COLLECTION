#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main() {
    vector<string> vecString;
    string s;
    while (cin >> s) {
        if (s == "quit") break;
        vecString.push_back(s);
    }
    for (string &item : vecString) {
        for (char &x : item) {
            x = toupper(x);
        }
        cout << item << endl;
    }


    return 0;
}