#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "asjkdhjkjhkasf";
    cout << str << endl;
    for (char& x : str) {
        x = 'X';
    }
    cout << str << endl;
    return 0;
}