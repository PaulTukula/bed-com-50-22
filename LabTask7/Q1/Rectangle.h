//#pragma once

class Rectangle
{
public:
    Rectangle();

    void setLength(float newLength);

    void setWidth(float newWidth);

    float getWidth();
    float getLength();
    float getArea();

    ~Rectangle();

private:
    float length;
    float width;


};