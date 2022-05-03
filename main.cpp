#include "header.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> graph[7];
    createGraph(graph);

    std::cout << graph[0].at(2);
    return 0;
}
