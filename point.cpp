#include "point.h"
#include <iostream>
#include <cmath>

Point::Point() : x(0), y(0) {}

Point::Point(float xVal, float yVal) : x(xVal), y(yVal) {}

void Point::setX(float xVal) {
    x = xVal;
}

void Point::setY(float yVal) {
    y = yVal;
}

float Point::getX() const {
    return x;
}

float Point::getY() const {
    return y;
}

void Point::display() const {
    std::cout << "(" << x << ", " << y << ")";
}

float Point::distance(const Point& p) const {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}
