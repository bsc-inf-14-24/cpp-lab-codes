#include "square.h"

using namespace shapes;

Square::Square() {
    side = 0;
}

Square::Square(double s) {
    side = s;
}

Square::~Square() {
    // Nothing to clean
}

void Square::setSide(double s) {
    side = s;
}

double Square::getSide() const {
    return side;
}