#include <iostream>

using namespace std;

int main() {
    unsigned scores[11];//不初始化可能会产生随机值
    for (auto x:scores) cout << x << endl;
    return 0;
}