//
// Created by Yaohui Li on 2022/5/2.
//

// 练习10.19：用stable_partition重写前一题的程序，与stable_sort类似，在划分后的序列中维持原有元素的顺序。

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void biggies(vector<string> &v, string::size_type sz)
{
    auto f = [sz](const string &s) -> bool { return s.size() >= sz; };
    auto p = stable_partition(v.begin(), v.end(), f);
    std::for_each(v.begin(), p, [](const string &s) -> void { cout << s << " "; });
}

int main()
{
    vector<string> v = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(v, 5);
    return 0;
}
