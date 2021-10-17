#include "Chapter6.h"

int fact(int n) {
    int ret = 1;
    for (int i = n; i >= 1; --i) {
        ret *= i;
    }
    return ret;
}