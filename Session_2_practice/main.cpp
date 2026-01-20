#include "cube.h"
#include <iostream>

int main() {
    cube c;

    c.setLength(12);
    c.setWidth(16);
    double result = 0;
    result = c.getArea();

    std::cout << "The area of cube is: " << result << std::endl;

    return 0;
}