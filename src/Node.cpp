//
// Created by Ashutosh Tiwari on 05/12/16.
//

#include "../include/Node.h"
using namespace std;

Node::Node() {
    //getGraph from this and get the
    //present id and neighbors
    assert(false);
}
Node::Node(Id id) : color(Color::White), id(id) {}
Node::Node(Id id, Color color) : color(color), id(id) {}
Color Node::get_color() { return color;}
void Node::set_color(Color c) {
    color = c;
}
