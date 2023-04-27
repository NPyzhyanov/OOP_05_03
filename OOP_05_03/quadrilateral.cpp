#include <string>
#include <iostream>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"

Quadrilateral::Quadrilateral()
{
    sides_amount = 4;
    figure_name = "Quadrilateral";
    p_sides = create_sides(4, p_sides_names);
    p_angles = create_angles(4, p_angles_names);
}

Quadrilateral::Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D)
{
    sides_amount = 4;
    figure_name = "Quadrilateral";
    p_sides = create_sides(4, p_sides_names);
    p_angles = create_angles(4, p_angles_names);
    
    set_sides_values(a, b, c, d);
    set_angles_values(A, B, C, D);
}

Quadrilateral::~Quadrilateral()
{
    delete[] p_sides;
    p_sides = nullptr;
    delete[] p_angles;
    p_angles = nullptr;
}

void Quadrilateral::set_sides_values(double a, double b, double c, double d)
{
    p_sides[0].set_value(a);
    p_sides[1].set_value(b);
    p_sides[2].set_value(c);
    p_sides[3].set_value(d);
}

void Quadrilateral::set_angles_values(double A, double B, double C, double D)
{
    p_angles[0].set_value(A);
    p_angles[1].set_value(B);
    p_angles[2].set_value(C);
    p_angles[3].set_value(D);
}

bool Quadrilateral::is_correct()
{
    double a = p_sides[0].get_value();
    double b = p_sides[1].get_value();
    double c = p_sides[2].get_value();
    double d = p_sides[3].get_value();
    double A = p_angles[0].get_value();
    double B = p_angles[1].get_value();
    double C = p_angles[2].get_value();
    double D = p_angles[3].get_value();
    
    bool correct = (a > 0) && (b > 0) && (c > 0) && (d > 0) && (A > 0) && (B > 0) && (C > 0) && (D > 0);
    
    correct &= ( (A + B + C + D) == 360.0 );
    
    correct &= (a < (b + c + d));
    correct &= (b < (c + d + a));
    correct &= (c < (d + a + b));
    correct &= (d < (a + b + c));
    
    return correct;
}

void Quadrilateral::print_info()
{
    print_basic_info();
    
    std::cout << "Sides: " << 
                 p_sides[0].get_name() << " = " << p_sides[0].get_value() << ", " << 
                 p_sides[1].get_name() << " = " << p_sides[1].get_value() << ", " << 
                 p_sides[2].get_name() << " = " << p_sides[2].get_value() << ", " << 
                 p_sides[3].get_name() << " = " << p_sides[3].get_value() << std::endl;
    
    std::cout << "Angles: " << 
                 p_angles[0].get_name() << " = " << p_angles[0].get_value() << ", " << 
                 p_angles[1].get_name() << " = " << p_angles[1].get_value() << ", " << 
                 p_angles[2].get_name() << " = " << p_angles[2].get_value() << ", " << 
                 p_angles[3].get_name() << " = " << p_angles[3].get_value() << std::endl;
    
    std::cout << std::endl;
}
