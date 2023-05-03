#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "isosceles_triangle.h"

bool Isosceles_Triangle::is_correct()
{
    bool correct = this->Triangle::is_correct();
    if (!correct)
    {
        return false;
    }
    
    double a = p_sides[0].get_value();
    double c = p_sides[2].get_value();
    double A = p_angles[0].get_value();
    double C = p_angles[2].get_value();
    
    correct &= (a == c);
    correct &= (A == C);
    
    return correct;
}
