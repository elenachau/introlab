#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle: public Shape{
    float radius;
    void calcPerimeter(); //override;
    void calcArea(); //override;

    public:
        Circle();
        Circle(float);
        Circle(const Circle&);
        virtual ~Circle();

        float getRadius();
        void setRadius(float);
};


#endif