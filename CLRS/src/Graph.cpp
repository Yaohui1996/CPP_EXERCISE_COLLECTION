#include "Graph.h"

namespace yiufai {

namespace CLRS {

void Graph::build() {
    vertices_.push_back(std::forward_list<vertex_attr_t>{{1, 100}, {2, 200}});
    vertices_.push_back(std::forward_list<vertex_attr_t>{{3, 300}, {4, 400}});
    vertices_.push_back(std::forward_list<vertex_attr_t>{{5, 500}, {6, 600}});
    vertices_.push_back(std::forward_list<vertex_attr_t>{});
    vertices_.push_back(std::forward_list<vertex_attr_t>{});
    vertices_.push_back(std::forward_list<vertex_attr_t>{});
    vertices_.push_back(std::forward_list<vertex_attr_t>{});
}

void Graph::show() {
    for (uint32_t u = 0; u != vertices_.size(); ++u) {
        std::ostringstream oss;
        oss << u << "->";
        for (const vertex_attr_t& v_attr : vertices_.at(u)) {
            oss << "[" << v_attr.id_ << "," << v_attr.weight_ << "]->";
        }
        std::string out_str(std::move(oss.str()));
        out_str.pop_back();
        out_str.pop_back();
        std::cout << out_str << std::endl;
    }
}

void Graph::transpose() {
    std::vector<std::forward_list<vertex_attr_t>> transposed_vertices(vertices_.size(),
                                                                      std::forward_list<vertex_attr_t>{});
    // 遍历每个结点
    for (uint32_t u = 0; u != vertices_.size(); ++u) {
        // 遍历当前结点指向的每个邻接结点
        for (const auto& v : vertices_.at(u)) {
            const uint32_t id = v.id_;
            const uint64_t weight = v.weight_;
            // 插入到transposed_vertices
            transposed_vertices.at(id).insert_after(transposed_vertices.at(id).cbefore_begin(),
                                                    vertex_attr_t(u, weight));
        }
    }
    vertices_ = std::move(transposed_vertices);
}

}  // namespace CLRS

}  // namespace yiufai