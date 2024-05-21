#include "Rectangle.hpp"

Rectangle::Rectangle(double width, double height) : width(width), height(height) {}

double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}
