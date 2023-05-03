#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "equilateral_triangle.h"

bool Equilateral_Triangle::is_correct()
{
    bool correct = this->Triangle::is_correct();
    if (!correct)
    {
        return false;
    }
    
    double a = p_sides[0].get_value();
    double b = p_sides[1].get_value();
    double c = p_sides[2].get_value();
    double A = p_angles[0].get_value();
    double B = p_angles[1].get_value();
    double C = p_angles[2].get_value();
    
    correct &= (a == b) && (a == c);
    correct &= (A == 60.0) && (B == 60.0) && (C == 60.0);
    
    return correct;
}
