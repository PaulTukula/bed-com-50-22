#include "Rectangle.h"

Rectangle:: Rectangle(){
    length = 0;
    width = 0;
}

void Rectangle::setLength(float newLength){
     length = newLength;
}

void Rectangle::setWidth(float newWidth){
       width = newWidth;
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