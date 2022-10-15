#include "SortAlgorithm.h"

namespace yaohui {

namespace CLRS {

void InsertSort(std::vector<int>::iterator beg, std::vector<int>::iterator end) {
    if (end - beg < 2) {
        return;
    }
    for (auto iter = beg + 1; iter != end; ++iter) {
        int key = *iter;
        auto cmp_iter = iter - 1;
        while (cmp_iter >= beg && *cmp_iter > key) {
            *(cmp_iter + 1) = *cmp_iter;
            --cmp_iter;
        }
        *(cmp_iter + 1) = key;
    }
}

void InsertSort(std::vector<int>& v) {
    /* v is sorted */
    if (v.size() < 2) {
        return;
    }
    for (int j = 1; j != v.size(); ++j) {
        int key = v[j];
        /* Insert v[j] into the sorted sequence v[1..j-1] */
        int i = j - 1;
        while (i >= 0 && v[i] > key) {
            v[i + 1] = v[i];
            --i;
        }
        v[i + 1] = key;
    }
}

}  // namespace CLRS

}  // namespace yaohui