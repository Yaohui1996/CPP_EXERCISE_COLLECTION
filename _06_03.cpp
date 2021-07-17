#include <iostream>

using namespace std;

int fact(int n);

int main() {
    cout << fact(5) << endl;
    return 0;
}

int fact(int n) {
    int ret = 1;
    for (int i = 1; i <= n; ++i) {
        ret *= i;
    }
    return ret;
}