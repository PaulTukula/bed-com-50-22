//#pragma once

namespace shapes{
    class Triangle
    {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double newBase, double newHeight);

        double getBase();
        double getHeight();

        ~Triangle();
    };
    
    

};