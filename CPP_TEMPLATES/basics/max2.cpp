#include <iostream>

inline int const &max(int const &a, int const &b)
{
    return a < b ? b : a;
}

template <typename T> inline T const &max(T const &a, T const &b)
{
    return a < b ? b : a;
}

template <typename T> inline T const &max(T const &a, T const &b, T const &c)
{
    return ::max(::max(a, b), c);
}

int main()
{
    std::cout << "max(7,42,68): " << ::max(7, 42, 68) << std::endl;
    std::cout << "max(7.0,42.0): " << ::max(7.0, 42.0) << std::endl;
    std::cout << "max('a','b'): " << ::max('a', 'b') << std::endl;
    std::cout << "max(7,42): " << ::max(7, 42) << std::endl;
    std::cout << "max<>(7,42): " << ::max<>(7, 42) << std::endl;
    std::cout << "max<double>(7,42): " << ::max<double>(7, 42) << std::endl;
    std::cout << "max('a',42.7): " << ::max('a', 42.7) << std::endl;
    return 0;
}