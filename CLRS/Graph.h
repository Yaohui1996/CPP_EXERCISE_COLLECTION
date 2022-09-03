#ifndef GRAPH_H
#define GRAPH_H

#include <cstdint>
#include <forward_list>
#include <vector>

namespace yiufai {

namespace CLRS {

struct vertex_attr_t {
    uint32_t id_;
    uint64_t weight_;
};

class Graph {
private:
    std::vector<std::forward_list<vertex_attr_t>> vertices_;
public:
    void transpose(){
        std::vector<std::forward_list<vertex_attr_t>> transposed_vertices;
        
    }

};

}  // namespace CLRS

}  // namespace yiufai

#endif  // GRAPH_H