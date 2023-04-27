#include <string>
#include <iostream>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"

Triangle::Triangle()
{
    sides_amount = 3;
    figure_name = "Triangle";
    p_sides = create_sides(3, p_sides_names);
    p_angles = create_angles(3, p_angles_names);
}

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
{
    sides_amount = 3;
    figure_name = "Triangle";
    p_sides = create_sides(3, p_sides_names);
    p_angles = create_angles(3, p_angles_names);
    
    set_sides_values(a, b, c);
    set_angles_values(A, B, C);
}

Triangle::~Triangle()
{
    delete[] p_sides;
    p_sides = nullptr;
    delete[] p_angles;
    p_angles = nullptr;
}

void Triangle::set_sides_values(double a, double b, double c)
{
    p_sides[0].set_value(a);
    p_sides[1].set_value(b);
    p_sides[2].set_value(c);
}

void Triangle::set_angles_values(double A, double B, double C)
{
    p_angles[0].set_value(A);
    p_angles[1].set_value(B);
    p_angles[2].set_value(C);
}

bool Triangle::is_correct()
{
    double a = p_sides[0].get_value();
    double b = p_sides[1].get_value();
    double c = p_sides[2].get_value();
    double A = p_angles[0].get_value();
    double B = p_angles[1].get_value();
    double C = p_angles[2].get_value();
    
    bool correct = (a > 0) && (b > 0) && (c > 0) && (A > 0) && (B > 0) && (C > 0);
    
    correct &= ( (A + B + C) == 180.0 );
    
    correct &= (a < (b + c));
    correct &= (b < (c + a));
    correct &= (c < (a + b));
    
    return correct;
}

void Triangle::print_info()
{
    print_basic_info();
    
    std::cout << "Sides: " << 
                 p_sides[0].get_name() << " = " << p_sides[0].get_value() << ", " << 
                 p_sides[1].get_name() << " = " << p_sides[1].get_value() << ", " << 
                 p_sides[2].get_name() << " = " << p_sides[2].get_value() << std::endl;
    
    std::cout << "Angles: " << 
                 p_angles[0].get_name() << " = " << p_angles[0].get_value() << ", " << 
                 p_angles[1].get_name() << " = " << p_angles[1].get_value() << ", " << 
                 p_angles[2].get_name() << " = " << p_angles[2].get_value() << std::endl;
    
    std::cout << std::endl;
}
