#include <iostream>
#include "point.h"

int main() {
    // Создание точек
    Point p1(3.0, 4.0);
    Point p2(1.0, 2.0);
    Point p3;  // точка (0, 0)

    std::cout << "=== Демонстрация класса Point ===" << std::endl;

    // Тестирование методов
    std::cout << "\n--- Точка 1 ---" << std::endl;
    p1.print();

    std::cout << "\n--- Точка 2 ---" << std::endl;
    p2.print();

    std::cout << "\n--- Точка 3 (по умолчанию) ---" << std::endl;
    p3.print();

    // Дополнительные операции
    std::cout << "\n--- Дополнительные операции ---" << std::endl;
    std::cout << "Расстояние между p1 и p2: " << p1.distanceTo(p2) << std::endl;

    Point sum = p1 + p2;
    std::cout << "Сумма p1 + p2: ";
    sum.print();

    // Тестирование геттеров/сеттеров
    std::cout << "\n--- Тестирование сеттеров ---" << std::endl;
    p3.setX(5.0);
    p3.setY(12.0);
    std::cout << "После изменения: ";
    p3.print();
    std::cout << "Координата X: " << p3.getX() << std::endl;
    std::cout << "Координата Y: " << p3.getY() << std::endl;

    return 0;
}