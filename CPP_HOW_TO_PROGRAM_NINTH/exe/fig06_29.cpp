#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <future>
#include <iomanip>
#include <iostream>
#include <random>
#include <thread>

using namespace std;

uint32_t fibonacci(const uint32_t);

int main()
{
    for (uint32_t n = 0; n <= 99; ++n)
    {
        cout << setw(2) << "fibonacci(" << n << ") = " << fibonacci(n) << endl;
    }
    return 0;
}

uint32_t fibonacci(const uint32_t n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}