#ifndef EQTRI_H
#define EQTRI_H

#include "Circle.h"
#include "Point2D.h"

class EqTri : public Circle
{
public:

    EqTri(Point2D center, double radius);
    void displayInfo() const override;
    double area() const override;
};

#endif