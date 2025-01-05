#include <iostream>

#include "Circle.h"
#include "EqTri.h"
#include "Point2D.h"


using namespace std;


int main()
{
    Point2D center(0, 0);
    Circle circle(center, 7);
    EqTri triangle(center, 7);

    cout << "Circle Test:" << endl;
    circle.displayInfo();
    cout << "Area: " << circle.area() << endl;

    cout << "\n Equilateral Triangle Test:" << endl;
    triangle.displayInfo();
    cout << "Area: " << triangle.area() << endl;

    return 0;
}



