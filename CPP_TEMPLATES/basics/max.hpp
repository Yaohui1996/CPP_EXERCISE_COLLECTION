namespace cpp_template
{

// basics/max.hpp
template <typename T> inline T const &max(T const &a, T const &b)
{
    // 如果a < b，那么返回b，否则返回a
    return a < b ? b : a;
}

template <typename T1, typename T2, typename T3> inline T3 const &max(T1 const &a, T2 const &b)
{
    // 如果a < b，那么返回b，否则返回a
    return a < b ? b : a;
}

} // namespace cpp_template

