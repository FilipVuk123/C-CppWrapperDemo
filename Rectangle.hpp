#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.hpp"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height);
    double area() const override;
    double perimeter() const override;

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
