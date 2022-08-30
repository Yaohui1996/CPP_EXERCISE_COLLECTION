// 练习10.27：除了unique（参见10.2.3节，第343页）之外，标准库还定义了名为unique_copy的函数，它接受第三个迭代器，表示拷贝不重复元素的目的位置。
// 编写一个程序，使用unique_copy将一个vector中不重复的元素拷贝到一个初始为空的list中。

#include <algorithm>
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
void print_list(const std::list<T>& li) {
    for (const auto& item : li) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v = {1, 1, 1, 2, 3, 3, 4, 5, 5, 6, 4, 7, 8, 8, 8, 8, 9};
    std::list<int> li;
    std::unique_copy(v.cbegin(), v.cend(), std::back_inserter(li));
    print_vec(v);
    print_list(li);
    return 0;
}
