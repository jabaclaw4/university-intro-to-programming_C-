#include <iostream>
#include "../include/point.h"
#include "../include/vector.h"

int main() {
    int x;
    Point p1(3.0, 4.0);
    Point p2(1.0, 2.0);

    Vector v1(3, 4);
    Vector v2(1, -2);
    Vector v3;

    std::cout << "choose class (enter 1 or 2)" << std::endl;
    std::cout << "1. class Point" << std::endl;
    std::cout << "2. class Vector" << std::endl;
    std::cin >> x;
    switch (x) {
        case 1:
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
        case 2:
            std::cout << "=== demonstration of the class Vector ===" << std::endl;
            std::cout << "vector 1 (" << v1.getX() << ";" << v1.getY() << ") Length: " << v1.length() << std::endl;
            std::cout << "vector 2 (" << v2.getX() << ";" << v2.getY() << ") Length: " << v2.length() << std::endl;
            Vector sum = v1.add(v2);
            std::cout << "sum v1 and v2: (" << sum.getX() << ";" << sum.getY() << ")" << std::endl;
            double dotPr = v1.dotProduct(v2);
            std::cout << "scalar product v1 and v2: " << dotPr << std::endl;
            Vector sum2 = v1 + v2;
            std::cout << "sum v1 and v2 (operator +):" << std::endl;
            std::cout << "v1 + v2 = (" << sum2.getX() << ";" << sum2.getY() << ")" << std::endl;
            std::cout << "dist between vectors: " << v1.distanceBetweenVectors(v2) << std::endl;
    }
    return 0;
}