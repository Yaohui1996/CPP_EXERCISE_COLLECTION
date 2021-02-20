//
// Created by Yaohui Li on 2021/2/20.
//

#include <vector>

using std::vector;

class NoDefault {
public:
    NoDefault(int n) : number(n) {}

private:
    int number = 0;
};

class C {
public:
    C() : member(0) {}

private:
    NoDefault member;
};

int main() {
    //vector<NoDefault> vec(10);
    //不合法。因为NoDefault没有默认构造函数。
    return 0;
}