#include "../include/vector.h"
#include <cmath>

Vector::Vector() {
    x = 0.0;
    y = 0.0;
}

Vector::Vector(double x, double y) {
    setX(x);
    setY(y);
}

double Vector::getX() {
    return x;
}

double Vector::getY() {
    return y;
}

void Vector::setX(double x) {
    this -> x = x;
}

void Vector::setY(double y) {
    this -> y = y;
}

double Vector::length() {
    return sqrt(x*x + y*y);
}

Vector Vector::add(Vector &other) {
    return Vector(x + other.x, y + other.y);
}

double Vector::dotProduct(Vector &other) {
    return x * other.x + y * other.y;
}

Vector Vector::operator+(Vector &other) {
    return Vector(x + other.x, y + other.y);
}

double Vector::distanceBetweenVectors(Vector &other) {
    double dx = x - other.getX();
    double dy = y - other.getY();
    return sqrt(dx * dx + dy * dy);
}