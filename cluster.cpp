#include "cluster.h"
#include <cstdlib>
#include <ctime>

Point Center(Point* arr, int n) {
    float xSum = 0, ySum = 0;
    for (int i = 0; i < n; i++) {
        xSum += arr[i].getX();
        ySum += arr[i].getY();
    }
    return Point(xSum / n, ySum / n);
}

char closestCluster(Point& p, Point& centerA, Point& centerB) {
    float distanceA = p.distance(centerA);
    float distanceB = p.distance(centerB);
    if (distanceA < distanceB) {
        return 'A';
    }
    else {
        return 'B';
    }
}
