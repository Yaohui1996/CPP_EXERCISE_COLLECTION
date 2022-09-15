#include <iostream>
#include <vector>

#include "PrintUtils.h"
#include "SortAlgorithm.h"

int main() {
    std::vector<int> v1 = {7, 6, 5, 4, 3, 2, 1};
    std::vector<int> v2 = {10, 65, 33, 24, 78, 99, 13};
    yaohui::utils::print_vector(v1);
    yaohui::utils::print_vector(v2);
    yaohui::CLRS::InsertSort(v1);
    yaohui::CLRS::InsertSort(v2);
    yaohui::utils::print_vector(v1);
    yaohui::utils::print_vector(v2);
    return 0;
}