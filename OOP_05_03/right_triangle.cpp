#include <string>

#include "side.h"
#include "angle.h"
#include "figure.h"
#include "triangle.h"
#include "right_triangle.h"

bool Right_Triangle::is_correct()
{
    bool correct = this->Triangle::is_correct();
    if (!correct)
    {
        return false;
    }
    
    double C = p_angles[2].get_value();
    
    correct &= (C == 90.0);
    
    return correct;
}
