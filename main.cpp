#include "header.h"

int main() {

    Graph myGraph(12, 7);
    makeGraph(&myGraph);

    int weight = myGraph.kruskalTree();

    std::cout << "Weight is " << weight << std::endl;


    return 0;
}
