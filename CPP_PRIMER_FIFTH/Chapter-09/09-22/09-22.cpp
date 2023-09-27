//
// Created by Yaohui Li on 2021/2/22.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> iv{2, 4, 3, 1, 2, 56, 8};
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    /*
     * 危险！
     * 循环不会结束
     * 迭代器也可能会失效
     */
    while (iter != mid)
        if (*iter == 8)
            iv.insert(iter, 2 * 8);

    return 0;
}