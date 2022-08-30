// 练习10.28：一个vector中保存1到9，将其拷贝到三个其他容器中。
// 分别使用inserter、back_inserter和front_inserter将元素添加到三个容器中。
// 对每种inserter，估计输出序列是怎样的，运行程序验证你的估计是否正确。

#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <vector>

template <typename T>
void print_vec(const std::vector<T>& vec) {
    for (const auto& item : vec) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void print_deq(const std::deque<T>& deq) {
    for (const auto& item : deq) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> v1, v3;
    std::deque<int> d2;
    std::copy(v.cbegin(), v.cend(), std::back_inserter(v1));
    std::copy(v.cbegin(), v.cend(), std::front_inserter(d2));
    std::copy(v.cbegin(), v.cend(), std::inserter(v3, v3.begin()));
    print_vec(v);
    print_vec(v1);
    print_deq(d2);
    print_vec(v3);
    return 0;
}
