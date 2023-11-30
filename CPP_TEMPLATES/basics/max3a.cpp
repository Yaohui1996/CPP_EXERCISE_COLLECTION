#include <cstring>
#include <iostream>
#include <string>

template <typename T> inline T const &max(T const &a, T const &b)
{
    return a < b ? b : a;
}

inline char const *const max(char const *const a, char const *const b)
{
    return std::strcmp(a, b) < 0 ? b : a;
}

template <typename T> inline T const &max(T const &a, T const &b, T const &c)
{
    return max(max(a, b), c);
}

int main()
{
    std::cout << "::max(7,42,68): " << ::max(7, 42, 68) << std::endl;
    const char *s1 = "frederic";
    const char *s2 = "anica";
    const char *s3 = "lucas";
    std::cout << "::max(s1,s2,s3): " << ::max(s1, s2, s3) << std::endl;

    return 0;
}