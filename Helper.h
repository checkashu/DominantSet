//
// Created by Ashutosh Tiwari on 05/12/16.
//

#ifndef DOMINANTSET_HELPER_H
#define DOMINANTSET_HELPER_H

#include "Headers.h"
#include "Graph.h"
#include "GraphHelper.h"

#include "Node.h"

//enums



//macros
#define nsize(container) (int)container.size

#define MFOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FOR(i,n,m) for(int (i)=(n);(i)<=(m);(i)++)
#define RFOR(i,n,m) for(int (i)=(n);(i)>=(m);(i)--)
#define FORALL(it,i)  for(auto (it) = (i).begin(); (it) != (i).end(); (it)++)



//typedefs
//typedef std::vector<std::vector<int> > adj_list;
#endif //DOMINANTSET_HELPER_H
