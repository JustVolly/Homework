#include <iostream>
#include <cmath>

#include "Circle.h"

using namespace std;


#define PI 3.14



Circle::Circle(Point2D center, double radius)
{
    this->Center = center;
    this->Radius = radius;
}

void Circle::setCenter(Point2D center)
{
    this->Center = center;
}

void Circle::setRadius(double radius)
{
    this->Radius = radius;
}

Point2D Circle::getCenter() const
{
    return Center;
}

double Circle::getRadius() const
{
    return Radius;
}

void Circle::displayInfo() const
{
    cout << "Center: " << "(" << Center.getX() << ", " << Center.getY() << ") Radius: " << Radius << endl;
}

double Circle::area() const
{
    return PI * Radius * Radius;
}