#include <iostream>

int main()
{
    int i = 42;
    void *p = &i; //void*可以存放任意对象的地址
    //long *lp = &i;//非法，因为lp应该指向long int型的变量，但i是int型变量
    return 0;
}