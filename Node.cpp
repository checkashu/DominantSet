//
// Created by Ashutosh Tiwari on 05/12/16.
//

#include "Node.h"
using namespace std;

Node::Node(Id id, Color color) : color(color), id(id) {}
Node::Node(Id id) : id(id) {}
Color Node::getColor() { return color;}
void Node::setColor(Color c) {
    color = c;
}
