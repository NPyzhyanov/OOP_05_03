#ifndef SQUARE_H
#define SQUARE_H

// Квадрат (a == b == c == d, A == B == C == D == 90)

class Square : public Quadrilateral
{
public:
    Square(double a) : Quadrilateral() {update_figure_name("Square"); set_sides_values(a, a, a, a); set_angles_values(90.0, 90.0, 90.0, 90.0);}
    
};

#endif // SQUARE_H
