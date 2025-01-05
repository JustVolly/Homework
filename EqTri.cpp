#include <iostream>
#include <cmath>


#include "EqTri.h"


using namespace std;

EqTri::EqTri(Point2D center, double radius)
{
    this->Center = center;
    this->Radius = radius;
}

void EqTri::displayInfo() const
{
    cout << "Center: " << "(" << Center.getX() << ", " << Center.getY() << ") Radius: " << Radius << endl;
}

double EqTri::area() const
{
    double side = 2 * Radius;
    return (sqrt(3) / 4) * side * side;
}
