//
// Created by Ashutosh Tiwari on 06/12/16.
//

#ifndef DOMINANTSET_GRAPHHELPER_H
#define DOMINANTSET_GRAPHHELPER_H

#include "Headers.h"
#include "Graph.h"

class GraphHelper {
private:

public:
    //this will return a connected graph with n number of nodes
    int rand_no();
    int rand_no(int, int);
    long long int rand_no(long long int, long long int);
};

#endif //DOMINANTSET_GRAPHHELPER_H
