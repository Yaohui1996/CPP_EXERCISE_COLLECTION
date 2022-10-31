#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

int main() {
  int a = 3, b = 4;
  decltype(a) c = a;
  //decltype(a = b) d = a;//编译器抛出warning

  cout << typeid(a).name() << endl; //a int
  cout << typeid(b).name() << endl; //b int
  cout << typeid(c).name() << endl; //c int
  //cout << typeid(d).name() << endl;//d int&

  return 0;
}