//
// Created by Zach Dupureur on 5/2/22.
//

#include "header.h"

// Representing Graph with Adjacency Matrix

void createGraph(std::vector<int> input[]) {
    // Quickly creating graph from lecture
    input[0] = {0, 0, 6, 0, 0, 5, 0};
    input[1] = {6, 0, 10, 0, 0, 8, 7};
    input[2] = {0, 10, 0, 8, 10, 0, 5};
    input[3] = {0, 0, 8, 0, 8, 0, 0};
    input[4] = {0, 0, 10, 8, 0, 12, 7};
    input[5] = {5, 8, 0, 0, 12, 0, 7};
    input[6] = {0, 7, 5, 0, 7, 7, 0};
}
