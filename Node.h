//
// Created by Ashutosh Tiwari on 05/12/16.
//

#ifndef DOMINANTSET_NODE_H
#define DOMINANTSET_NODE_H
#include "Headers.h"

class Node {
private:
    Color color;
    std::vector <Node> neighbors;
    Id id;
public:
    Node(Id, Color);
    Node(Id);
    Color getColor();
    void setColor(Color);
};



#endif //DOMINANTSET_NODE_H
