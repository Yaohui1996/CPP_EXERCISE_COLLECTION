#include <iostream>

int main() {
    //a
//    int sz = 10;
//    int ix = 0;
//    for (ix = 0; ix != sz; ++ix) {}
//    if (ix != sz) {}

    //b
//    int ix;
//    int sz = 10;
//    for (ix = 0; ix != sz; ++ix) {}

    //c
    int sz = 10;
    for (int ix = 0; ix != sz; ++ix, ++sz) { }
    return 0;
}