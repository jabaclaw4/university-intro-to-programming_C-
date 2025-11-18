#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Конструкторы
    Point();  // по умолчанию
    Point(double x, double y);  // с параметрами

    // Геттеры
    double getX() const;
    double getY() const;

    // Сеттеры
    void setX(double x);
    void setY(double y);

    //расстояние до начала координат
    double distanceToOrigin() const;
};

#endif