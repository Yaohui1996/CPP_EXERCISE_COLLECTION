#include<cstddef>
#include "fact.h"

int fact(const int &n)
{
    int ret = 1;
    for (size_t i = 1; i <= n; ++i)
    {
        ret *= i;
    }
    return ret;
}