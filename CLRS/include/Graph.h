#ifndef GRAPH_H
#define GRAPH_H

#include <cstdint>
#include <forward_list>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
namespace yiufai {

namespace CLRS {

class Graph {
private:
    struct vertex_attr_t {
        vertex_attr_t(uint32_t id, uint64_t weight) : id_(id), weight_(weight) {}
        uint32_t id_;
        uint64_t weight_;
    };

private:
    std::vector<std::forward_list<vertex_attr_t>> vertices_;  // 用邻接链表保存图结构
    std::vector<std::vector<vertex_attr_t>> matrix_;          // 用邻接矩阵保存图结构

public:
    void build();
    void show();
    void transpose();
};

}  // namespace CLRS

}  // namespace yiufai

#endif  // GRAPH_H