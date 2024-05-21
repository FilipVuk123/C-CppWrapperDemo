#ifndef SHAPE_WRAPPER_H
#define SHAPE_WRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void ShapeWrapper;

ShapeWrapper* Circle_create(double radius);
ShapeWrapper* Rectangle_create(double width, double height);
double Shape_area(ShapeWrapper* shape);
double Shape_perimeter(ShapeWrapper* shape);
void Shape_destroy(ShapeWrapper* shape);

#ifdef __cplusplus
}
#endif

#endif // SHAPE_WRAPPER_H
