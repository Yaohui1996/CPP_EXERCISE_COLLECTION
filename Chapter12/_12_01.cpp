#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::unique_ptr;
using std::weak_ptr;

int main()
{

    int *p = new int;
    cout << *p << endl;
    *p = 12;
    cout << *p << endl;

    delete p;

    return 0;
}