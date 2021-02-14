#include <iostream>

using namespace std;

int main() {
    int x;
    int y;
    while (cin >> x >> y) {
        try {
            if (y == 0)
                throw runtime_error("出错！除数为0");
            cout << x / y << endl;
        } catch (runtime_error err) {

        }
    }

    return 0;
}