#include <iostream>

int main()
{
    int a = 100;
    int *p = &a;

    if (p)
    {
        return 1;
    } //如果p不是nullptr，返回1

    if (*p)
    {
        return 2;
    } //如果*p不是0，返回2

    return 0;
}