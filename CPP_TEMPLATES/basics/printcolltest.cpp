#include "printcoll.hpp"
#include <vector>

int main()
{
    std::vector<int> v = {2, 3, 4, 5, 6, 8};
    printcoll<std::vector<int>>(v);
    printcoll(v);
    return 0;
}