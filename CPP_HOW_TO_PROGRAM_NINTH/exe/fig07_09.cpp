#include <array>
#include <cstddef>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    const size_t array_size = 11;
    array<int, array_size> arr = {16, 5, 13, 8, 10, 12, 7, 20, 18, 10, 11};
    for (size_t i = 0; i != arr.size(); ++i)
    {
        // 输出前缀
        if (i == 0)
        {
            cout << "0-9: ";
        }
        else if (i == 10)
        {
            cout << "100: ";
        }
        else
        {
            cout << i * 10 << "-" << (i + 1) * 10 - 1 << ": ";
        }
        cout << "\t";
        // 输出个数
        for (size_t j = 0; j != arr[i]; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}