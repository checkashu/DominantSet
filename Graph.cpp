//
// Created by Ashutosh Tiwari on 06/12/16.
//

#include "Graph.h"

using namespace std;

void Graph::create_and_return_graph(int number_of_nodes) {
    GraphHelper helper;
    FOR (i, 1, number_of_nodes - 1) { //leaving the first node
        int random_node = helper.rand_no(0, i - 1);//node to which this is going to connect to
        adj_list[i][random_node] = adj_list[random_node][i] = true;

    }
}
//ids 0 to n - 1
Graph::Graph(int n): number(n), adj_list(vector<bool> (false, n), n) {
    MFOR(i, n) {
        nodes.emplace_back(new Node(i));

    }
    create_and_return_graph(n);
}