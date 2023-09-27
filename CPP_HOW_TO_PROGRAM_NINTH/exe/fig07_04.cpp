#include <array>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    array<int, 5> arr = {32, 27, 64, 18, 95};
    cout << "Element" << setw(13) << "Value" << endl;
    for (size_t i = 0; i != arr.size(); ++i)
    {
        cout << setw(7) << i << setw(13) << arr[i] << endl;
    }

    return 0;
}