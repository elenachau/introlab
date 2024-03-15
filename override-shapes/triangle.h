#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle: public Shape{
    float side1, side2, side3;
    void calcArea(); //override;

    public:
        Triangle();
        Triangle(float, float, float);
        Triangle(const Triangle&);

        float getSide1();
        float getSide2();
        float getSide3();

        void setSide1(float);
        void setSide2(float);
        void setSide3(float);
        virtual ~Triangle();
};

#endif