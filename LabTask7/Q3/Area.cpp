#include "Area.h"
#include <cmath>

using namespace shapes;

    double Area::getSquareArea(Square newSquare){
        double area = pow(newSquare.getSideLength(), 2);
        return area;
    }
     double Area::getCircleArea(Circle newCircle){
        double area =  (22/7.0) * pow(newCircle.getRadius(), 2);
        return area;
    }
    double Area::getTriangleArea(Triangle newTriangle){
       double area = (newTriangle.getBase() * newTriangle.getHeight()) / 2 ;
       return area;
    }
    

