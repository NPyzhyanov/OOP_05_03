#ifndef ISOSCELES_TRIANGLE_H
#define ISOSCELES_TRIANGLE_H

// Равнобедренный (a == c; A == C)

class Isosceles_Triangle : public Triangle
{
public:
    Isosceles_Triangle(double a, double b, double A, double B) : Triangle() {update_figure_name("Isosceles triangle"); set_sides_values(a, b, a); set_angles_values(A, B, A);}
    
};

#endif // ISOSCELES_TRIANGLE_H
