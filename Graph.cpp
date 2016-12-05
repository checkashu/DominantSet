//
// Created by Ashutosh Tiwari on 06/12/16.
//

#include "Graph.h"

using namespace std;

bool Graph::addNode(int addSize) {
    int size = nsize(nodes);
    MFOR (i, addSize)
        nodes.emplace_back(new Node(size + i));
}

Graph Graph::createGraph(int number_of_nodes, int length, int width) {

}