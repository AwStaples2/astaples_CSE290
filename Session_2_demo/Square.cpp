#include "square.h"

void Square::setLength(double length) {
    length_ = length;

}

void Square::setWidth(double width) {
    width_ = width;
}

double Square::calcArea() {
    return length_ * width_;
}