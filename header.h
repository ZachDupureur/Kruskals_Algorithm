//
// Created by Zach Dupureur on 5/2/22.
//

#ifndef UNTITLED1_HEADER_H
#define UNTITLED1_HEADER_H

#include "iostream"
#include "iomanip"
#include "vector"
#include "climits"
#include "algorithm"

class Graph {
public:
    int numEdges, vertices;
    std::vector<std::pair<int, std::pair<int, int>>> edges; // Graph representation using pairs

    Graph(int x, int y) { // Constructor
        vertices = x;
        numEdges = y;
    }

    void makeEdge(int x, int y, int z) { // Add edge with pair
        edges.push_back({z, {x,y}});
    }

    int kruskalTree(); // Gets MST of graph

};

class DisjointSet { // Need object for disjoint sets
public:
    int *parent, *order; // Pointers to parent array
    int size = 0;

    DisjointSet(int size) { // Constructor
        this->size = size;
        parent = new int[size+1];
        order = new int[size+1];

        for (int i = 0; i <= size; i++) {
            parent[i] = i; // Parent equals itself
            order[i] = 0; // initilize to zero for compression
        }
    }

    int find(int x);
    void makeUnion(int x, int y);

};

void makeGraph(Graph *myGraph);



#endif //UNTITLED1_HEADER_H
