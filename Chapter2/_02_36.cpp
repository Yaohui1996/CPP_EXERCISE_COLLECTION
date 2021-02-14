#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main() {
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;//引用
    ++c;
    ++a;

    cout << a << endl;//a = 4
    cout << b << endl;//b = 4
    cout << c << endl;//c = 4
    cout << d << endl;//d = 4

    cout << typeid(a).name() << endl;//int
    cout << typeid(b).name() << endl;//int
    cout << typeid(c).name() << endl;//int
    cout << typeid(d).name() << endl;//int

    return 0;
}