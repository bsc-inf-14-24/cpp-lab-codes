#include "area.h"
#include <cmath>

double Area::squareArea(shapes::Square s) {
    return s.getSide() * s.getSide();
}

double Area::triangleArea(shapes::Triangle t) {
    return 0.5 * t.getBase() * t.getHeight();
}

double Area::circleArea(shapes::Circle c) {
    return M_PI * c.getRadius() * c.getRadius();
}