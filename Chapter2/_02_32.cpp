#include <iostream>

int main()
{
    //int null = 0, *p = null;不正确
    int null = 0, *p = &null;

    return 0;
}