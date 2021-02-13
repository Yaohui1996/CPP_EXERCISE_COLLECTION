#include <iostream>

int main() {
    std::cout << "/*";//正确
    std::cout << "*/";//正确
    //std::cout<</* "*/" */;//不正确
    std::cout <</* "*/" */";//改正后
    std::cout <</* "*/" /* "/*" */;//正确

    return 0;
}