
#include "shape_wrapper.h"
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

extern "C" {

ShapeWrapper* Circle_create(double radius) {
    return reinterpret_cast<ShapeWrapper*>(new Circle(radius));
}

ShapeWrapper* Rectangle_create(double width, double height) {
    return reinterpret_cast<ShapeWrapper*>(new Rectangle(width, height));
}

double Shape_area(ShapeWrapper* shape) {
    return reinterpret_cast<Shape*>(shape)->area();
}

double Shape_perimeter(ShapeWrapper* shape) {
    return reinterpret_cast<Shape*>(shape)->perimeter();
}

void Shape_destroy(ShapeWrapper* shape) {
    delete reinterpret_cast<Shape*>(shape);
}

}
