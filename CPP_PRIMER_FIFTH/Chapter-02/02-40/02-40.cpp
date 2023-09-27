#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned int soldNums = 0;
    double bookPrice = 0.0;
};

int main()
{
    Sales_data xx;
    xx.bookPrice = 12.3;
    std::cout << xx.bookPrice << std::endl;
    std::cout << "haha" << std::endl;
    std::cout << "hello" << std::endl;
    ;
    return 0;
}