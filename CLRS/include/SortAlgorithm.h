#ifndef SORTALGORITHM_H
#define SORTALGORITHM_H

#include <vector>

namespace yaohui {

namespace CLRS {

void InsertSort(std::vector<int>::iterator beg, std::vector<int>::iterator end);
// void InsertSort(size_t beg, size_t end);
void InsertSort(std::vector<int>& v);
}  // namespace CLRS

}  // namespace yaohui

#endif  // SORTALGORITHM_H