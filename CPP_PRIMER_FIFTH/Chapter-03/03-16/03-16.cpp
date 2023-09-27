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

    for (const auto &x : v1)
        cout << " " << x << " ";
    cout << endl;
    for (const auto &x : v2)
        cout << " " << x << " ";
    cout << endl;
    for (const auto &x : v3)
        cout << " " << x << " ";
    cout << endl;
    for (const auto &x : v4)
        cout << " " << x << " ";
    cout << endl;
    for (const auto &x : v5)
        cout << " " << x << " ";
    cout << endl;
    for (const auto &x : v6)
        cout << " " << x << " ";
    cout << endl;
    for (const auto &x : v7)
        cout << " " << x << " ";
    cout << endl;

    return 0;
}