#include "Rectangle.h"

Rectangle:: Rectangle(){
    length = 0;
    width = 0;
}
 Rectangle:: Rectangle(float lengthl, float widthl){
    length = lengthl;
    width = widthl;
 }

float Rectangle::getWidth(){
      return width;
   }

float Rectangle::getLength(){
    return length;
}

float Rectangle::getArea(){
  return length * width;
}

 Rectangle::~Rectangle() {

 }