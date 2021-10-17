#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main()
{
    const int i = 42;  //i是const int
    auto j = i;        //j是int
    const auto &k = i; //k是对int的const引用
    auto *p = &i;      //p是指向int的普通指针
    const auto j2 = i;
    //const auto j2 = i, &k = i;//j2是const int，k语法错误

    cout << typeid(i).name() << endl;
    cout << typeid(j).name() << endl;
    cout << typeid(k).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(j2).name() << endl;

    return 0;
}