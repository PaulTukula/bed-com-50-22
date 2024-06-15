#include "Square.h"

shapes::Square::Square(){
   sideLength = 1;
}
shapes::Square::Square(double newLength){
   sideLength = newLength;
}

double shapes::Square::getSideLength(){
   return sideLength;
}

shapes::Square::~Square(){
   
}

