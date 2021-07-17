#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> veci;
    veci.reserve(10);
    for (int i = 0; i < 10; ++i) {
        veci.push_back(i * i);
    }
    for (auto it = veci.begin(); it != veci.end(); ++it) {
        *it *= 2;
        cout << *it << endl;
    }


    return 0;
}