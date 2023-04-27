#ifndef RECTANGLE_H
#define RECTANGLE_H

// Прямоугольник (a == c, b == d, A == B == C == D == 90)

class Rectangle : public Quadrilateral
{
public:
    Rectangle(double a, double b) : Quadrilateral() {update_figure_name("Rectangle"); set_sides_values(a, b, a, b); set_angles_values(90.0, 90.0, 90.0, 90.0);}
    
};

#endif // RECTANGLE_H
