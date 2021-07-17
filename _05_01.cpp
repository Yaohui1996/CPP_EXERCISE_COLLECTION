#include <iostream>

using namespace std;

int main() {
    int x = 10;
    {
        int x = 0;
        cout << x << endl;
    }
    cout << x << endl;
    if (x < 1000) {

    }
    return 0;
}