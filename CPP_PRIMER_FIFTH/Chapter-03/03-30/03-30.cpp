#include <iostream>

using namespace std;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 0; ix < array_size; ++ix)
    {
        ia[ix] = ix;
        cout << ia[ix] << endl;
    }
    return 0;
}