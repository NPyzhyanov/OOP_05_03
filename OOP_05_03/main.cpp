#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

int main()
{
    Figure null_figure;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    Right_Triangle wrong_right_triangle(15, 20, 30, 50, 60);
    Right_Triangle right_right_triangle(15, 20, 30, 50, 40);
    Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
    Equilateral_Triangle equilateral_triangle(30);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);
    
    Figure* ptrs_array[] = {&null_figure, &triangle, &wrong_right_triangle, &right_right_triangle, &isosceles_triangle, &equilateral_triangle,
                           &quadrilateral, &rectangle, &square, &parallelogram, &rhombus};
    
    int array_length = sizeof(ptrs_array) / sizeof(ptrs_array[0]);
    
    for(int i = 0; i < array_length; i++)
    {
        ptrs_array[i]->print_info();
    }
    
    return 0;
}
