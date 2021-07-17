#include <iostream>
#include <vector>

using namespace std;

int main() {
    int x;
    vector<int> vecInt;
    while (cin >> x) {
        vecInt.push_back(x);
    }
    for (auto it = vecInt.cbegin(); it != vecInt.cend() - 1; ++it) {
        cout << *it + *(it + 1) << endl;
    }
    auto itLeft = vecInt.begin();
    auto itRight = vecInt.end() - 1;
    while (itLeft < itRight) {
        cout << *itLeft + *itRight << endl;
        ++itLeft;
        --itRight;
    }
    return 0;
}