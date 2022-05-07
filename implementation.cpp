//
// Created by Zach Dupureur on 5/2/22.
//

#include "header.h"

// Representing Graph with Adjacency Matrix

int Graph::kruskalTree() {
    int weight = 0;
    // Sort edges
    std::sort(edges.begin(), edges.end());

    DisjointSet disjointSet(vertices);
    // Make an iterator
    std::vector<std::pair<int, std::pair<int,int>>>::iterator myIter;
    for (myIter = edges.begin(); myIter != edges.end(); myIter++) {
        int first = myIter->second.first; // Set numbers to first and second vertices
        int second = myIter->second.second;
        int set_A = disjointSet.find(first);
        int set_B = disjointSet.find(second);

        //Check for cycle
        if (set_A != set_B) {
            std::cout << first + 1 << " has edge with " << second + 1 << " with weight " << myIter->first << std::endl;
            weight = weight + myIter->first;
            disjointSet.makeUnion(set_A, set_B);
        }
    }

    return weight;

}

int DisjointSet::find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

void DisjointSet::makeUnion(int x, int y) {
    int h = find(x);
    int j = find(y);

    if (order[h] > order[j]) {
        parent[y] = h;
    }
    else {
        parent[x] = j;
    }

    if (order[h] == order[j]) {
        order[j]++;
    }
}

void makeGraph(class Graph *myGraph) { // Function to quickly make graph
    myGraph->makeEdge(0,1,6);
    myGraph->makeEdge(0,5,5);
    myGraph->makeEdge(1,2,10);
    myGraph->makeEdge(1,6,7);
    myGraph->makeEdge(1,5,8);
    myGraph->makeEdge(2,6,5);
    myGraph->makeEdge(2,3,8);
    myGraph->makeEdge(2,4,10);
    myGraph->makeEdge(3,4,8);
    myGraph->makeEdge(4,6,7);
    myGraph->makeEdge(4,5,12);
    myGraph->makeEdge(5,6,7);
}

