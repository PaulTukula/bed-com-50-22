//#pragma once

namespace shapes{
    class Square
    {
    private:
        double sideLength;

    public:
        Square();
        Square(double newLength);

        double getSideLength();

        ~Square();
    };
    
    

};