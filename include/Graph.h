//
// Created by Ashutosh Tiwari on 06/12/16.
//

#ifndef DOMINANTSET_GRAPH_H
#define DOMINANTSET_GRAPH_H

#include "Headers.h"
#include "Node.h"

typedef std::vector<std::vector<bool> > Adj_list;
typedef std::vector<Node> Nodes;

typedef int Number;

class Graph {
private:
    Adj_list adj_list;
    Nodes nodes;
    Number number;
public:
    Graph(int);
    bool add_node(int);
    void create_and_return_graph(int);//# of nodes
};
#endif //DOMINANTSET_GRAPH_H
