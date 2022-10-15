#ifndef GRAPH_H
#define GRAPH_H

#include <cstdint>
#include <forward_list>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

namespace yaohui {

namespace CLRS {

class Graph {
private:
    const uint64_t INFINITY_WEIGHT = std::numeric_limits<uint64_t>::max();
    struct vertex_attr_t {
        vertex_attr_t(uint32_t id, uint64_t weight) : id_(id), weight_(weight) {}
        uint32_t id_;
        uint64_t weight_;
    };

private:
    std::vector<std::forward_list<vertex_attr_t>> vertices_;  // 用邻接链表保存图结构
    std::vector<std::vector<uint64_t>> matrix_;               // 用邻接矩阵保存图结构
    bool use_forward_list_ = true;                            // 保存图使用的数据结构
public:
    explicit Graph(const bool use_forward_list = true) : use_forward_list_(use_forward_list) {}
    void build();
    void show() const;
    void transpose();

private:
    void build_forward_list();
    void build_matrix();
    void show_forward_list() const;
    void show_matrix() const;
    void transpose_forward_list();
    void transpose_matrix();
};

}  // namespace CLRS

}  // namespace yaohui

#endif  // GRAPH_H