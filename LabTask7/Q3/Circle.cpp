#include "Circle.h"

shapes::Circle::Circle(){
   radius = 1;
}
shapes::Circle::Circle(double newRadius){
   radius = newRadius;
}

double shapes::Circle::getRadius(){
   return radius;
}

shapes::Circle::~Circle(){
   
}

