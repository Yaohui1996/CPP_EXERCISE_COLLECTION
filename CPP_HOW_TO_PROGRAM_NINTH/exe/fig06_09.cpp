#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    uint32_t frequency1 = 0;
    uint32_t frequency2 = 0;
    uint32_t frequency3 = 0;
    uint32_t frequency4 = 0;
    uint32_t frequency5 = 0;
    uint32_t frequency6 = 0;
    srand(static_cast<uint32_t>(time(0))); // 设置随机数种子
    for (uint32_t roll = 1; roll <= 6000000; ++roll)
    {
        uint32_t face = 1 + rand() % 6;
        switch (face)
        {
        case 1:
            ++frequency1;
            break;
        case 2:
            ++frequency2;
            break;
        case 3:
            ++frequency3;
            break;
        case 4:
            ++frequency4;
            break;
        case 5:
            ++frequency5;
            break;
        case 6:
            ++frequency6;
            break;
        default:
            break;
        } // end switch
    }     // end for

    // 输出
    cout << "Face" << setw(13) << "Frequency" << endl;
    cout << "   1" << setw(13) << frequency1 << "\n   2" << setw(13) << frequency2 << "\n   3" << setw(13) << frequency3
         << "\n   4" << setw(13) << frequency4 << "\n   5" << setw(13) << frequency5 << "\n   6" << setw(13)
         << frequency6 << endl;

    return 0;
} // end main function