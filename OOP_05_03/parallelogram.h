#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

// Параллелограмм (a == c, b == d, A == C, B == D)

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(double a, double b, double A, double B) : Quadrilateral() {update_figure_name("Parallelogram"); set_sides_values(a, b, a, b); set_angles_values(A, B, A, B);}
    
protected:
    bool is_correct() override;
    
};

#endif // PARALLELOGRAM_H
