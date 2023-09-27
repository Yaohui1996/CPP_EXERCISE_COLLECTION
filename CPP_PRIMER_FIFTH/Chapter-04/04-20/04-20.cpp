#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector<string> vec{"str1", "str2", "str3"};
    vector<string>::iterator iter = vec.begin();

    cout << *iter++ << endl;
    // cout << (*iter)++ << endl;
    // cout << *iter.empty() << endl;//.优先级高于*
    cout << iter->empty() << endl;
    cout << *++iter << endl;
    cout << iter++->empty() << endl;

    return 0;
}