#ifndef VECTOR_H
#define VECTOR_H

#include "Point.h"

class Vector {
private:
    double x;
    double y;

public:
    Vector();
    Vector(double x, double y);
    double getX();
    double getY();
    double length();
    Vector add(Vector& other);//сумма векторов
    double dotProduct(Vector& other);//скалярное произведение
    Vector operator+(Vector& other);//сложение перегрузка
    double distanceBetweenVectors(Vector& other);
};

#endif