#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

uint32_t factorial(const uint32_t);

int main()
{
    for (uint32_t n = 0; n <= 10; ++n)
    {
        cout << setw(2) << n << "! = " << factorial(n) << endl;
    }
    return 0;
}

uint32_t factorial(const uint32_t n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}