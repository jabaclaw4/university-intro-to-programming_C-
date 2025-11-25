#include "../include/point.h"
#include <cmath>

Point::Point() {
    x = 0.0;
    y = 0.0;
}

Point::Point(double x, double y) {
    setX(x);
    setY(y);
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}

double Point::distanceToOrigin() {
    return sqrt(x*x + y*y);
}

