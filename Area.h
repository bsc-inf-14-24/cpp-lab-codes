#ifndef AREA_H
#define AREA_H

#include "square.h"
#include "triangle.h"
#include "circle.h"

class Area {
public:
    static double squareArea(shapes::Square s);
    static double triangleArea(shapes::Triangle t);
    static double circleArea(shapes::Circle c);
};

#endif