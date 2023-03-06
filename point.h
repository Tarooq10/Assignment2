#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point();
    Point(float xVal, float yVal);
    void setX(float xVal);
    void setY(float yVal);
    float getX() const;
    float getY() const;
    void display() const;
    float distance(const Point& p) const;
private:
    float x;
    float y;
};

#endif