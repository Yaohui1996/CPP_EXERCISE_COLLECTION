#include <iostream>

void display_num(int);
void display_num(double);

int main()
{
    display_num(399);
    display_num(3.99);
    return 0;
}

void display_num(int x)
{
    std::cout << x << std::endl;
}
void display_num(double x)
{
    std::cout << x << std::endl;
}