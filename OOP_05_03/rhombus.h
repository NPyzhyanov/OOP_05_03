#ifndef RHOMBUS_H
#define RHOMBUS_H

// Ромб (a == b == c == d, A == C, B == D)

class Rhombus : public Quadrilateral
{
public:
    Rhombus(double a, double A, double B) : Quadrilateral() {update_figure_name("Rhombus"); set_sides_values(a, a, a, a); set_angles_values(A, B, A, B);}
    
};

#endif // RHOMBUS_H
