#include <iostream>

#include "Graph.h"

int main() {
    yiufai::CLRS::Graph g1(true);
    g1.build();
    std::cout << "转置前: " << std::endl;
    g1.show();
    g1.transpose();
    std::cout << "转置后: " << std::endl;
    g1.show();

    yiufai::CLRS::Graph g2(false);
    g2.build();
    std::cout << "转置前: " << std::endl;
    g2.show();
    g2.transpose();
    std::cout << "转置后: " << std::endl;
    g2.show();
    return 0;
}
