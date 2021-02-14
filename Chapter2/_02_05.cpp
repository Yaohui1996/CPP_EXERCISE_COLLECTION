#include <iostream>
#include <string>

using std::string;

int main() {

    //a
    char a = 'a';
    wchar_t b = L'a';
    string c = "a";
    // L"a" 表示每个字符占2个字节

    //b
    int e = 10;
    unsigned int f = 10u;
    long int g = 10L;
    unsigned long int h = 10uL;
    int i = 012;    //八进制
    int j = 0xC;    //十六进制
    std::cout << i << std::endl;
    std::cout << j << std::endl;

    //c
    double k = 3.14;
    float l = 3.14f;
    long double m = 3.14L;

    //d
    int n = 10;
    unsigned int o = 10;
    double p = 10.;
    double q = 10e-2;

    return 0;
}

