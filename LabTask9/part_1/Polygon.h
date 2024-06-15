#pragma once

class Polygon{
    protected:
        int mWidth;
        int mHeigth;
    public:
        void SetValue(int width, int height);
        virtual int Area();
};