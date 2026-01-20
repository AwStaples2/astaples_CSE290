#include "cube.h"

namespace mysquare {
void cube::setLength(double length) {
    length_ = length;
}

void cube::setWidth(double width) {
    width_ = width;
}

double cube::getArea() {
    double area = width_ * length_;
    return area;
}
}