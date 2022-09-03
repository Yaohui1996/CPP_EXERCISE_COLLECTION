#include <iostream>

#include "Graph.h"

int main() {
    yiufai::CLRS::Graph g;
    g.build();
    std::cout << "转置前: " << std::endl;
    g.show();
    g.transpose();
    std::cout << "转置后: " << std::endl;
    g.show();
    return 0;
}
