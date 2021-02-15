//
// Created by Yaohui Li on 2021/2/14.
//

#include <vector>
#include <iostream>

using namespace std;

int add(int x, int y);

int sub(int x, int y);

int multiply(int x, int y);

int divide(int x, int y);

int main() {
    vector<int (*)(int, int)> v;
    v.push_back(add);
    v.push_back(sub);
    v.push_back(multiply);
    v.push_back(divide);

    cout << "8 + 4 = " << v[0](8, 4) << endl;
    cout << "8 - 4 = " << v[1](8, 4) << endl;
    cout << "8 * 4 = " << v[2](8, 4) << endl;
    cout << "8 / 4 = " << v[3](8, 4) << endl;

    


    return 0;
}

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}