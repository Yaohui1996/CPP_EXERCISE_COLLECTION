#include <cstring>
#include <iostream>
#include <string>

template <typename T> inline T const &max(T const &a, T const &b)
{
    return a < b ? b : a;
}

template <typename T> inline T *const &max(T *const &a, T *const &b)
{
    return *a < *b ? b : a;
}

inline char const *const &max(char const *const &a, char const *const &b)
{
    return std::strcmp(a, b) < 0 ? b : a;
}

int main()
{
    int a = 7;
    int b = 42;
    ::max(a, b);
    std::cout << "::max(a, b): " << ::max(a, b) << std::endl;

    std::string s = "hey";
    std::string t = "you";
    ::max(s, t);
    std::cout << "::max(s, t): " << ::max(s, t) << std::endl;

    int *p1 = &b;
    int *p2 = &a;
    std::cout << "*(::max(p1, p2)): " << *(::max(p1, p2)) << std::endl;

    char const *s1 = "David";
    char const *s2 = "Nico";
    std::cout << "::max(s1, s2): " << ::max(s1, s2) << std::endl;
    return 0;
}