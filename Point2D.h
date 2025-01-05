#ifndef POINT2D_H
#define POINT2D_H

class Point2D
{
private:

    double x;
    double y;

public:

    Point2D(double x = 0, double y = 0);

    void setX(double x);
    void setY(double y);

    double getX() const;
    double getY() const;
};

#endif
