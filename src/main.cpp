#include <iostream>
#include "../include/point.h"

int main() {
    Point p1(3.0, 4.0);
    Point p2(1.0, 2.0);
    std::cout << "=== demonstration of the class Point ===" << std::endl;
    std::cout << "point 1 (" << p1.getX() << ";" << p1.getY() << ") DistToOrigin(len of radius-vector): " << p1.distanceToOrigin() << std::endl;
    std::cout << "point 2 (" << p2.getX() << ";" << p2.getY() << ") DistToOrigin(len of radius-vector): " << p2.distanceToOrigin() << std::endl;
    std::cout << "\n--- testing seters ---" << std::endl;
    std::cout << "before changes: ";
    std::cout << "coordinate X: " << p2.getX() << std::endl;
    std::cout << "coordinate Y: " << p2.getY() << std::endl;
    p2.setX(3.0);
    p2.setY(2.8);
    std::cout << "after changes: ";
    std::cout << "coordinate X: " << p2.getX() << std::endl;
    std::cout << "coordinate Y: " << p2.getY() << std::endl;
    return 0;
}