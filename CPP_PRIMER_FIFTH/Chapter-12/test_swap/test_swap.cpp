#include <iostream>
#include <memory>
#include <string>

using namespace std;

int main()
{
    shared_ptr<string> p1 = make_shared<string>("haha");
    shared_ptr<string> p2 = make_shared<string>("xixi");
    if (p1 && p2)
    {
        cout << "[p1=" << *p1 << "]" << " [p2=" << *p2 << "]\n";
    }
    p1.swap(p2);
    if (p1 && p2)
    {
        cout << "[p1=" << *p1 << "]" << " [p2=" << *p2 << "]\n";
    }

    return 0;
}
