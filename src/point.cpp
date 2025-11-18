#include "point.h"

// Конструктор по умолчанию
Point::Point() : x(0.0), y(0.0) {}

// Конструктор с параметрами
Point::Point(double x, double y) : x(x), y(y) {}

// Геттеры
double Point::getX() const { return x; }
double Point::getY() const { return y; }

// Сеттеры
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

// Расстояние до начала координат
double Point::distanceToOrigin() const {
    return std::sqrt(x * x + y * y);
}

// Вывод информации о точке
void Point::print() const {
    std::cout << "Точка (" << x << ", " << y << ")" << std::endl;
    std::cout << "Расстояние до начала координат: " << distanceToOrigin() << std::endl;
}

