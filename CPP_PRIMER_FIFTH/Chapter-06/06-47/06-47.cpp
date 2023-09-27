//
// Created by Yaohui Li on 2021/2/14.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> print(vector<int> v);

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    print(v);

    return 0;
}

vector<int> print(vector<int> v)
{
#ifndef NDEBUG
    cout << "vector size: " << v.size() << endl;
#endif
    if (v.size() == 0)
        return {};
    else
    {
        cout << *v.begin() << " ";
        v.erase(v.begin());
        return print(v);
    }
}
