#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

// Равносторонний (a == b == c; A == B == C == 60)

class Equilateral_Triangle : public Triangle
{
public:
    Equilateral_Triangle(double a) : Triangle() {update_figure_name("Equilateral triangle"); set_sides_values(a, a, a); set_angles_values(60.0, 60.0, 60.0);}
    
};

#endif // EQUILATERAL_TRIANGLE_H
