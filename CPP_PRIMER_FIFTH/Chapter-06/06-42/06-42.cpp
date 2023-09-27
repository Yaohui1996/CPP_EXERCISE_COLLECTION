//
// Created by Yaohui Li on 2021/2/14.
//

#include <string>

using namespace std;

string make_plural(size_t ctr, const string &ending, const string &word = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    return 0;
}