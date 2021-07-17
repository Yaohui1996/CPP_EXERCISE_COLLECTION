#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string bigStr;
    while (cin >> str)
    {
        if (str == "终止")
            break;
        bigStr += " ";
        bigStr += str;
    }
    cout << bigStr << endl;
    return 0;
}