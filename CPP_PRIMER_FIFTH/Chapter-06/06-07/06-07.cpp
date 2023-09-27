#include <iostream>

using namespace std;

int diaoyong();

int main()
{
    cout << diaoyong() << endl;
    cout << diaoyong() << endl;
    cout << diaoyong() << endl;
    cout << diaoyong() << endl;
    cout << diaoyong() << endl;
    cout << diaoyong() << endl;

    return 0;
}

int diaoyong()
{
    static int x = -1;
    ++x;
    return x;
}