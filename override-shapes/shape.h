#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape{
    protected:
        float area, perimeter;
        int numSides, maxSides;
        float* sides;
        virtual void calcPerimeter(); //can override, but not required
        virtual void calcArea() = 0;
    public:
        Shape();
        virtual ~Shape(); //can override
        Shape(int, int, float*);
        Shape(const Shape&);

        float getPerimeter();
        float getArea();
        void setPerimeter(float);
        void setArea(float);

        float* getSides();
        int getNumSides();
        int getMaxSides();
        void resizeSides();
        void addSide(float);

        Shape& operator=(const Shape& rhs);

};

#endif