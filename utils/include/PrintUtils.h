#ifndef PRINTUTILS_H
#define PRINTUTILS_H

#include <cstdint>
#include <deque>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

namespace yaohui {

namespace utils {

template <typename BuildInType>
void print_list(const std::list<BuildInType>& li) {
    std::ostringstream oss;
    for (auto iter = li.cbegin(); iter != li.cend(); ++iter) {
        oss << *iter << ", ";
    }
    std::string os(std::move(oss.str()));
    os.pop_back();
    os.pop_back();
    std::cout << os << std::endl;
}

template <typename BuildInType>
void print_vector(const std::vector<BuildInType>& vec) {
    for (auto iter = vec.cbegin(); iter != vec.cend(); ++iter) {
        if (iter != vec.end() - 1) {
            std::cout << *iter << ", ";
        } else {
            std::cout << *iter << std::endl;
        }
    }
}

template <typename BuildInType>
void print_deque(const std::deque<BuildInType>& deq) {
    for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter) {
        if (iter != deq.end() - 1) {
            std::cout << *iter << ", ";
        } else {
            std::cout << *iter << std::endl;
        }
    }
}

}  // namespace yaohui
}  // namespace primer

#endif  // PRINTUTILS_H
