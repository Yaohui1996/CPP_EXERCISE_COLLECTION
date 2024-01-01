// basics/max3a.cpp
#include <cstring>
#include <iostream>
#include <string>

// 两个任意类型值的最大者 (通过传引用进行调用)
template <typename T> inline T const &max(T const &a, T const &b)
{
    return a < b ? b : a;
}

// 两个C字符串的最大者 (通过传值进行调用)
inline char const *max(char const *a, char const *b)
{
    return std::strcmp(a, b) < 0 ? b : a;
}

// 求3个任意类型值的最大者 (通过传引用进行调用)
template <typename T> inline T const &max(T const &a, T const &b, T const &c)
{
    return max(max(a, b), c); // 注意：如果max(a, b)使用传值调用
                              // 那么将会发生错误
}

int main()
{
    ::max(7, 42, 68); // OK

    const char *s1 = "frederic";
    const char *s2 = "anica";
    const char *s3 = "lucas";
    ::max(s1, s2, s3); // 错误。
}
