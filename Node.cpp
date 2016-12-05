//
// Created by Ashutosh Tiwari on 05/12/16.
//

#include "Node.h"

Node::Node(Color color) : color(color), neighbors(0,new Neighbor()) {}
Node::Node() : color(Color::White) {}
Color Node::getColor() {}
