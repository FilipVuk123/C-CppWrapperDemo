#include <stdio.h>
#include "shape_wrapper.h"

int main() {
    ShapeWrapper* circle = Circle_create(5.0);
    printf("Circle area: %.2f\n", Shape_area(circle));
    printf("Circle perimeter: %.2f\n", Shape_perimeter(circle));
    Shape_destroy(circle);

    ShapeWrapper* rectangle = Rectangle_create(4.0, 6.0);
    printf("Rectangle area: %.2f\n", Shape_area(rectangle));
    printf("Rectangle perimeter: %.2f\n", Shape_perimeter(rectangle));
    Shape_destroy(rectangle);

    return 0;
}
