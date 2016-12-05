//
// Created by Ashutosh Tiwari on 06/12/16.
//

#ifndef DOMINANTSET_GRAPH_H
#define DOMINANTSET_GRAPH_H

#include "Headers.h"
#include "Node.h"

class Graph {
private:
    std::vector<Node> nodes;

public:
    bool addNode(int);
    Graph createGraph(int, int, int); //#nodes, length, breadth

};
#endif //DOMINANTSET_GRAPH_H
