#include <algorithm>
#include <chrono>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <vector>

std::vector<int32_t> random_int_generator()
{
    std::vector<int32_t> int_vec;
    int_vec.reserve(10000000);
    for (int32_t i = 0; i != 10000000; ++i)
    {
        int_vec.push_back(i);
    }
    std::shuffle(int_vec.begin(), int_vec.end(), std::default_random_engine());
    std::stringstream ss;
    for (size_t i = 0; i != 1000000; ++i)
    {
        ss << int_vec[i] << std::endl;
    }
    std::fstream of;
    of.open("pp_exe_1_6_3_case.txt", std::ios::out);
    of << ss.str();
    of.close();
    return int_vec;
}

int main()
{
    // 生成随机数
    auto vec1 = random_int_generator();
    auto vec2 = random_int_generator();
    // 排序
    // 方法1: 自带的sort函数
    auto t0 = std::chrono::steady_clock::now();
    std::sort(vec1.begin(), vec1.end());
    auto t1 = std::chrono::steady_clock::now();
    std::cout << "方法1: 自带的sort函数的耗时: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count() << std::endl;

    // 方法2: 位图sort
    t0 = std::chrono::steady_clock::now();
    std::vector<bool> bits(10000000, false);
    for (size_t i = 0; i != vec2.size(); ++i)
    {
        bits[vec2[i]] = true;
    }
    std::vector<int32_t> vec2_sorted;
    vec2_sorted.reserve(vec2.size() * 2);
    for (size_t i = 0; i != bits.size(); ++i)
    {
        if (bits[i])
        {
            vec2_sorted.push_back(i);
        }
    }
    t1 = std::chrono::steady_clock::now();
    std::cout << "方法2: 位图sort的耗时: " << std::chrono::duration_cast<std::chrono::milliseconds>(t1 - t0).count()
              << std::endl;
    return 0;
}