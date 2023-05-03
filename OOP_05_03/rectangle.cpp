#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "quadrilateral.h"
#include "rectangle.h"

bool Rectangle::is_correct()
{
    bool correct = this->Quadrilateral::is_correct();
    if (!correct)
    {
        return false;
    }
    
    double a = p_sides[0].get_value();
    double b = p_sides[1].get_value();
    double c = p_sides[2].get_value();
    double d = p_sides[3].get_value();
    double A = p_angles[0].get_value();
    double B = p_angles[1].get_value();
    double C = p_angles[2].get_value();
    double D = p_angles[3].get_value();
    
    correct &= (a == c) && (b == d);
    correct &= (A == 90.0) && (B == 90.0) && (C == 90.0) && (D == 90.0);
    
    return correct;
}
