//
// Created by Ashutosh Tiwari on 05/12/16.
//

#ifndef DOMINANTSET_NODE_H
#define DOMINANTSET_NODE_H
#include "Headers.h"
#include "Helper.h"

enum Color{
    Black,
    Grey,
    White,
};

typedef int Id;


class Node {
private:
    Color color;
    Id id;

public:

    Node(Id, Color);
    Node(Id);
    Node();
    Color get_color();
    void set_color(Color);
};



#endif //DOMINANTSET_NODE_H
