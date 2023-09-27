#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    unsigned int counter = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (*it == 'a')
            ++counter;
        else if (*it == 'e')
            ++counter;
        else if (*it == 'i')
            ++counter;
        else if (*it == 'o')
            ++counter;
        else if (*it == 'u')
            ++counter;
    }
    cout << counter << endl;

    return 0;
}