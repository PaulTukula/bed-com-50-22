//#pragma once

class Rectangle
{
public:
    Rectangle();
    Rectangle(float length, float width);

    float getWidth();
    float getLength();
    float getArea();

    ~Rectangle();

private:
    float length;
    float width;


};