#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    const size_t array_size = 5;
    array<int, array_size> arr;
    for (size_t i = 0; i != arr.size(); ++i)
    {
        arr[i] = 2 + 2 * i;
    }
    cout << "Element" << setw(13) << "Value" << endl;
    for (size_t i = 0; i != arr.size(); ++i)
    {
        cout << setw(7) << i << setw(13) << arr[i] << endl;
    }

    return 0;
}