#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Figure
{
public:
    Triangle();
    Triangle(double a, double b, double c, double A, double B, double C);
    
    ~Triangle();
    
protected:
    void set_sides_values(double a, double b, double c);
    void set_angles_values(double A, double B, double C);
    
    bool is_correct() override;
    void print_info() override;
    
private:
    char p_sides_names[3] = {'a', 'b', 'c'};
    char p_angles_names[3] = {'A', 'B', 'C'};
};

#endif // TRIANGLE_H
