#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::unique_ptr;
using std::weak_ptr;
using std::make_shared;

int main()
{

    int *p = new int;
    cout << *p << endl;
    *p = 12;
    cout << *p << endl;

    delete p;

    shared_ptr<string> p2 = make_shared<string>("chushihua string");

    cout << *p2 << endl;

    if (p2 && p2->empty())
        *p2 = "hi";
    
    cout << *p2 << endl;

    *p2 = "hhhhh";
    cout << *p2 << endl;


    return 0;
}