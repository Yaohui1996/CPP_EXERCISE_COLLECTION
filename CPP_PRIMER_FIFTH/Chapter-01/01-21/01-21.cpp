#include <iostream>

#include "Sales_item.h"

int main()
{
    Sales_item book1;
    Sales_item book2;
    std::cin >> book1;
    std::cin >> book2;

    std::cout << book1 + book2 << std::endl;

    return 0;
}

/*
 * input:
 * book1: 0-201-78345-x 3 20.00
 * book2: 0-201-78345-x 2 25.00
 */