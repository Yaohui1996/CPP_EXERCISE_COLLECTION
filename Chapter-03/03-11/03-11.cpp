#include <iostream>
#include <string>

using namespace std;

int main() {
    const string s = "Keep out!";
    for (auto &c : s) {};
    //合法。
    //c的类型为const char&
    //关键点：auto 关键字忽略顶层const，保留底层const
    return 0;
}