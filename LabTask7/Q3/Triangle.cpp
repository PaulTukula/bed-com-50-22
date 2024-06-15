#include "Triangle.h"

shapes::Triangle::Triangle(){
   base = 1;
   height = 1;
}
shapes::Triangle::Triangle(double newBase, double newHeight){
   base = newBase;
   height = newHeight;
}

double shapes::Triangle::getBase(){
   return base;
}
double shapes::Triangle::getHeight(){
   return height;
}


shapes::Triangle::~ Triangle(){
   
}
