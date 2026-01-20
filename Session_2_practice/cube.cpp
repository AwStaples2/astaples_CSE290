#include "cube.h"

void cube::setLength(double length) {
    length_ = length;
}

void cube::setWidth(double width) {
    width_ = width;
}

int cube::getArea() {
    double area = width_ * length_;
    return area;
}