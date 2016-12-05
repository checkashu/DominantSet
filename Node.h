//
// Created by Ashutosh Tiwari on 05/12/16.
//

#ifndef DOMINANTSET_NODE_H
#define DOMINANTSET_NODE_H
#include "Headers.h"


class Node {
private:
    Color color;
    vector <Node> neighbors;
public:
    Node(Color color);
    Node();
    Color getColor();
    void setColor(Color color);
};



#endif //DOMINANTSET_NODE_H
