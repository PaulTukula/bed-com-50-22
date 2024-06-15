//#pragma once
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

using namespace shapes;

class Area
{
public:
    static double getSquareArea(Square newSquare);

    static double getCircleArea(Circle newCircle);

    static double getTriangleArea(Triangle newCircle);

};
