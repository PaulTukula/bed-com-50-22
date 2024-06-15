//#pragma once

namespace shapes{
    class Circle
    {
    private:
        double radius;

    public:
        Circle();
        Circle(double newRadius);

        double getRadius();

        ~Circle();
    };
    
    

};