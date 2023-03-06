#include <iostream>
#include <cstdlib>
#include <ctime>
#include "point.h"
#include "cluster.h"
using namespace std;

int main() {
    // Generate random points for cluster A
    srand(time(NULL));
    const int n = 200;
    Point clusterA[n];
    for (int i = 0; i < n; i++) {
        float x = rand() % 21 + 70;
        float y = rand() % 21 + 70;
        clusterA[i] = Point(x, y);
    }

    // Generate random points for cluster B
    const int m = 200;
    Point clusterB[m];
    for (int i = 0; i < m; i++) {
        float x = rand() % 21 + 20;
        float y = rand() % 21 + 20;
        clusterB[i] = Point(x, y);
    }

    // Generate random points p and determine which cluster they belong to
    const int numPoints = 20;
    for (int i = 0; i < numPoints; i++) {
        float x = rand() % 96 + 5;
        float y = rand() % 96 + 5;
        Point p(x, y);
        Point centerA = Center(clusterA, n);
        Point centerB = Center(clusterB, m);
        char closest = closestCluster(p, centerA, centerB);
        cout << "Point ";
        p.display();
        cout << " belongs to Cluster " << closest << endl;
    }

    return 0;
}