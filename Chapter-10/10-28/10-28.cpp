// 练习10.28：一个vector中保存1到9，将其拷贝到三个其他容器中。
// 分别使用inserter、back_inserter和front_inserter将元素添加到三个容器中。
// 对每种inserter，估计输出序列是怎样的，运行程序验证你的估计是否正确。

#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

#include "PrintUtils.h"

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v1, v3;
    std::deque<int> d2;
    std::copy(v.cbegin(), v.cend(), std::back_inserter(v1));
    std::copy(v.cbegin(), v.cend(), std::front_inserter(d2));
    std::copy(v.cbegin(), v.cend(), std::inserter(v3, v3.begin()));
    yaohui::utils::print_vector(v);
    yaohui::utils::print_vector(v1);
    yaohui::utils::print_deque(d2);
    yaohui::utils::print_vector(v3);
    return 0;
}
