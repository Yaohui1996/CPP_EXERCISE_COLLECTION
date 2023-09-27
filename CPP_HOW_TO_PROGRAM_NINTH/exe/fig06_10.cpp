#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    uint32_t seed = 0;
    cout << "请输入随机数种子: ";
    cin >> seed;
    srand(seed);
    // srand(static_cast<uint32_t>(time(0)));
    for (uint32_t counter = 1; counter <= 10; ++counter)
    {
        cout << setw(10) << (1 + rand() % 6);
        if (counter % 5 == 0)
        {
            cout << endl;
        } // end if
    }     // end for

    return 0;
}