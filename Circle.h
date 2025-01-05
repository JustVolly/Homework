#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point2D.h"

class Circle
{
protected:

    Point2D Center;
    double Radius;

public:

    Circle(Point2D center = Point2D(), double radius = 0);

    void setCenter(Point2D center);
    void setRadius(double radius);

    Point2D getCenter() const;

    double getRadius() const;


    virtual void displayInfo() const;
    virtual double area() const;
};

#endif
