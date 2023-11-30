#include <iostream>
// basics/max4.cpp
//  求两个任意类型值的最大者

template <typename T> inline T const &max(T const &a, T const &b)
{
    return a < b ? b : a;
}

// 求3个任意类型值的最大者
template <typename T> inline T const &max(T const &a, T const &b, T const &c)
{
    return max(max(a, b), c); // 使用了模板的版本，即使有下面声明的int
                              // 版本，但该声明来得太迟了
}
// 求两个int值的最大者
inline int const &max(int const &a, int const &b)
{
    return a < b ? b : a;
}

int main()
{
    std::cout << "::max(1,2,3): " << max(1, 2, 3) << std::endl;
    return 0;
}