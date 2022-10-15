#include "Graph.h"

namespace yaohui {

namespace CLRS {

void Graph::build_forward_list() {
    vertices_ = std::move(std::vector<std::forward_list<vertex_attr_t>>{
        {{1, 100}, {2, 200}}, {{3, 300}, {4, 400}}, {{5, 500}, {6, 600}}, {}, {}, {}, {}});
}
void Graph::build_matrix() {
    matrix_ = std::move(std::vector<std::vector<uint64_t>>{
        {INFINITY_WEIGHT, 100, 200, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT},
        {INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, 300, 400, INFINITY_WEIGHT, INFINITY_WEIGHT},
        {INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, 500, 600},
        {INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT,
         INFINITY_WEIGHT},
        {INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT,
         INFINITY_WEIGHT},
        {INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT,
         INFINITY_WEIGHT},
        {INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT, INFINITY_WEIGHT,
         INFINITY_WEIGHT}});
}

void Graph::show_forward_list() const {
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
};
void Graph::show_matrix() const {
    std::string out_str;
    for (uint32_t u = 0; u != matrix_.size(); ++u) {
        std::string line;
        for (uint32_t v = 0; v != matrix_.at(u).size(); ++v) {
            const uint64_t w = matrix_.at(u).at(v);
            if (w != INFINITY_WEIGHT) {
                line += std::to_string(matrix_.at(u).at(v));
            } else {
                line += "INF";
            }
            line += ",";
        }
        line.pop_back();
        line.push_back('\n');
        out_str += line;
    }
    std::cout << out_str;
};

void Graph::transpose_forward_list() {
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
};
void Graph::transpose_matrix() {
    for (uint32_t u = 0; u != matrix_.size() - 1; ++u) {
        for (uint32_t v = u + 1; v != matrix_.at(u).size(); ++v) {
            std::swap(matrix_.at(u).at(v), matrix_.at(v).at(u));
        }
    }
};

void Graph::build() {
    if (use_forward_list_) {
        build_forward_list();
    } else {
        build_matrix();
    }
}

void Graph::show() const {
    if (use_forward_list_) {
        show_forward_list();
    } else {
        show_matrix();
    }
}

void Graph::transpose() {
    if (use_forward_list_) {
        transpose_forward_list();
    } else {
        transpose_matrix();
    }
}

}  // namespace CLRS

}  // namespace yaohui