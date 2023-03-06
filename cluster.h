#ifndef CLUSTER_H
#define CLUSTER_H

#include "point.h"

Point Center(Point* arr, int n);

char closestCluster(Point& p, Point& centerA, Point& centerB);

#endif
