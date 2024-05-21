#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"

class Circle : public Shape {
public:
    Circle(double radius);
    double area() const override;
    double perimeter() const override;

private:
    double radius;
};

#endif // CIRCLE_H
