#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "asjkdhjkjhkasf";
    cout << str << endl;
    for (char &x : str) {
        x = 'X';
    }
    cout << str << endl;

    str = "asjkdhjkjhkasf";
    cout << str << endl;

    string::size_type i = 0;
    while (i < str.size()) {
        str[i] = 'X';
        ++i;
    }

    cout << str << endl;
    return 0;
}