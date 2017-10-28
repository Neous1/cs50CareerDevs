#include <stdio.h>
#include <cs50.h>

bool valid_triangle (float a, float b, float c);



bool valid_triangle (float a, float b, float c)
{
    //check for all positive sides
    if (x<=0 || y <= 0 || z <= 0)
    {
        return false;
    }
    // check that sum of any two sides is greater than the third
    if ((x +y <=z)|| (x+z <= y) || (y + z <= x))
    {
        return false;
    }
    
    return true;
}