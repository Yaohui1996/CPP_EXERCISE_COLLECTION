#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10}; // 有坑
    vector<string> v7{10, "hi"};

    cout << "size of v1: " << v1.size() << " " << endl;
    cout << "size of v2: " << v2.size() << " " << endl;
    cout << "size of v3: " << v3.size() << " " << endl;
    cout << "size of v4: " << v4.size() << " " << endl;
    cout << "size of v5: " << v5.size() << " " << endl;
    cout << "size of v6: " << v6.size() << " " << endl;
    cout << "size of v7: " << v7.size() << " " << endl;

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = v3.begin(); it != v3.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = v4.begin(); it != v4.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    for (vector<string>::iterator it = v6.begin(); it != v6.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    for (vector<string>::iterator it = v7.begin(); it != v7.end(); ++it)
    {
        cout << " " << *it << " ";
    }
    cout << endl;
    return 0;
}