#include <cstdint>
#include <iostream>
#include <omp.h>
#include <sstream>
#include <string>

bool make_thread(int n)
{
    std::cout << "thread: " << n << " is running..." << std::endl;
    int a = 0;
    while (a < 100)
    {
        std::stringstream ss;
        if (a == 99)
        {
            a = 0;
            // std::cout << "a: " << a << " is running..." << std::endl;
            ss << a;
            if (a % 2 == 0)
            {
                ss << a;
            }
        }
        ++a;
        std::string str_a = ss.str();
    }
    return true;
}

int main(int argc, const char *argv[])
{
    // int32_t thread_cnt = std::stoi(argv[1]);
    const int32_t thread_cnt = 32;
    std::cout << "thread_cnt: " << thread_cnt << std::endl;
    #pragma omp parallel for schedule(dynamic) num_threads(thread_cnt)
    for (int32_t i = 0; i < thread_cnt; ++i)
    {
        make_thread(i);
    }
    return 0;
}