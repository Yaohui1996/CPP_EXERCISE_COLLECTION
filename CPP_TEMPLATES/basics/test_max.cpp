#include "max.hpp"
#include <complex>
#include <cstdint>
#include <string>

int main()
{
    // 正常:
    std::string s1, s2;
    ::cpp_template::max(s1, s2);

    double d1, d2;
    ::cpp_template::max(d1, d2);

    int32_t i1, i2;
    ::cpp_template::max(i1, i2);

    // 异常:
    // std::complex<float> c1, c2;  // std::complex并不支持operator <
    // ::cpp_template::max(c1, c2); // 编译器错误

    // 解法3:
    ::cpp_template::max<double, int32_t, double>(d1, i1);
    return 0;
}
