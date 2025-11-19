#ifndef POINT_H
#define POINT_H

#include <cmath>

class Point {
private:
    double x;
    double y;
public:
    Point() {
        x = 0.0;
        y = 0.0;
    }
    Point(double x, double y) {
        setX(x);
        setY(y);
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    void setX(double x) {
        this -> x = x;
    }
    void setY(double y) {
        this -> y = y;
    }
    //расстояние до начала координат
    double distanceToOrigin() {
        return sqrt(x*x + y*y);
    }
};

#endif