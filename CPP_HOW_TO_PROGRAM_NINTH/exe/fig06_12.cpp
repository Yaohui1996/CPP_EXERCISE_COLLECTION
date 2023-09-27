#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

int main()
{
    default_random_engine engine(static_cast<uint32_t>(time(0)));
    uniform_int_distribution<uint32_t> randomInt(1, 6);
    for (uint32_t counter = 1; counter <= 10; ++counter)
    {
        cout << setw(10) << randomInt(engine);
        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
    return 0;
} // end main function