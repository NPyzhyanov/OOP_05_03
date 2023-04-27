#ifndef RIGHT_TRIANGLE_H
#define RIGHT_TRIANGLE_H

// Прямоугольный (C == 90)

class Right_Triangle : public Triangle
{
public:
    Right_Triangle(double a, double b, double c, double A, double B) : Triangle() {update_figure_name("Right traingle"); set_sides_values(a, b, c); set_angles_values(A, B, 90.0);}
    
};

#endif // RIGHT_TRIANGLE_H
